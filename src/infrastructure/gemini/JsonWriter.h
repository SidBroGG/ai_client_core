#pragma once

#include <string>

#include "ChatRequest.h"

class JsonWriter {
public:
    std::string BuildChatRequestJson(const ChatRequest& request) const;
};