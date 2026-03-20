#pragma once

#include <string>

class GeminiChat {
public:
    struct Response {
        std::string message;
        bool isError = false;
    };

    Response SendMessage(const std::string& message, const std::string& modelName, const std::string& apiKey);

private:
    Response HttpRequest(const std::string& jsonRequest, const std::string& modelName, const std::string& apiKey);

    std::string ParseRequest(const std::string& message);
    Response ParseResponse(const std::string& jsonResponse);
};