#pragma once

#include <map>
#include <string>

struct HttpResponse {
    int statusCode = 0;
    std::map<std::string, std::string> headers;
    std::string body;
};