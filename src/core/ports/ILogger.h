#pragma once

#include <string>

class ILogger {
public:
    enum class LogLevel {
        Info,
        Warn,
        Error
    };

    virtual ~ILogger() = default;

    virtual void Log(const std::string& message, LogLevel logLevel);
};