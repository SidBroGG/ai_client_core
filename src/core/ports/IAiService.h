#pragma once

#include "ChatRequest.h"
#include "ChatResponse.h"

class IAiService {
public:
    virtual ~IAiService() = default;

    virtual ChatResponse SendChat(const ChatRequest& request) = 0;
};