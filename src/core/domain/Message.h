#pragma once

#include <string>

struct Message {
    enum class Role {
        System,
        User,
        AI
    };

    Role role;
    std::string text;
};