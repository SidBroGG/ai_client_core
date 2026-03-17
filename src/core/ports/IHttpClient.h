#pragma once

#include "HttpRequest.h"
#include "HttpResponse.h"

class IHttpClient {
public:
    virtual ~IHttpClient() = default;

    virtual HttpResponse Send(const HttpRequest& request) = 0;
};