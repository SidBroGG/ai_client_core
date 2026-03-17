#pragma once

#include <string>

struct ChatRequest {
    std::string requestUrl;
    std::string message;
    std::string apiKey;
};