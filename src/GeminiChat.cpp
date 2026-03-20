#include "GeminiChat.hpp"

#include "libs/httplib.h"
#include "libs/json.hpp"

using json = nlohmann::json;

GeminiChat::Response GeminiChat::HttpRequest(const std::string& jsonRequest, const std::string& modelName, const std::string& apiKey) {
    httplib::Client cli("https://generativelanguage.googleapis.com");
    cli.set_connection_timeout(1, 0);
    cli.set_read_timeout(5, 0);

    std::string path = "/v1beta/models/" + modelName + ":generateContent?key=" + apiKey;

    auto res = cli.Post(path, jsonRequest, "application/json");

    if (res) {
        if (res->status == 200) {
            return {res->body, false};
        } else {
            return {std::to_string(res->status), true};
        }
    }

    auto err = res.error();
    return {httplib::to_string(err), true};
}

std::string GeminiChat::ParseRequest(const std::string& message) {
    json payload = {{"contents", {{{"parts", {{{"text", message}}}}}}}};
    return payload;
}

GeminiChat::Response GeminiChat::ParseResponse(const std::string& jsonResponse) {
    json response = json::parse(jsonResponse);

    if (response.contains("error")) {
        return {response["error"]["message"], true};
    }

    return {response["candidates"][0]["content"]["parts"][0]["text"], false};
}
