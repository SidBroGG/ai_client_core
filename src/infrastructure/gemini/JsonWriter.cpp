#include "JsonWriter.h"

#include "libs/json.hpp"
using json = nlohmann::json;

std::string JsonWriter::BuildChatRequestJson(const ChatRequest& request) const {
    json part;
    part["text"] = request.message;

    json contentItem;
    contentItem["parts"] = json::array({part});

    json result;
    result["contents"] = json::array({contentItem});
}