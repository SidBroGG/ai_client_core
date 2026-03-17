#pragma once

#include <vector>

#include "Message.h"

class ChatSession {
public:
    const std::vector<Message>& GetMessages() const;
    void AddMessage(const Message& message);

private:
    std::vector<Message> _messages;
};