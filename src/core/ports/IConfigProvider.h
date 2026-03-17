#pragma once

#include <string>

class IConfigProvider {
public:
    virtual ~IConfigProvider() = default;

    virtual const std::string& GetApiKey() const = 0;
    virtual const std::string& GetRequestUrl() const = 0;
};