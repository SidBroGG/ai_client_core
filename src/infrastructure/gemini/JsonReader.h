#pragma once

#include <string>

class JsonReader {
public:
    std::string ExtractAssistantText(const std::string& json) const;
    std::string ExtractErrorMessage(const std::string& json) const;
};