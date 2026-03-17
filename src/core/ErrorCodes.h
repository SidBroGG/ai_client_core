#pragma once

enum class ErrorCodes {
    None,
    MissingApiKey,
    NetworkError,
    HttpError,
    ParseError,
    Unauthorized,
    RateLimited,
    Unknown
};