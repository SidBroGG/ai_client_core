#pragma once

#include <ChatRequest.h>
#include <ChatResponse.h>
#include <Message.h>

#include <vector>

class IChatRepository {
public:
    virtual ~IChatRepository() = default;

    virtual void AddMessage(const Message& message) = 0;
    virtual std::vector<Message> GetMessages() const = 0;
    virtual void Clear() = 0;
};