#pragma once

#include <iostream>

struct ChatResponse {
    bool success;
    std::string responseMessage;
    std::string errorMessage;
};