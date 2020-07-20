#pragma once

#include <chrono>
#include <string>

namespace ApprovalTests
{
    class DateUtils
    {
    public:
        static std::chrono::system_clock::time_point
        createDateTime(int year, int month, int day, int hour, int minute, int second);

        static std::string toString(const std::chrono::system_clock::time_point& dateTime,
                                    const std::string& format);

        static std::string
        toString(const std::chrono::system_clock::time_point& dateTime);
        static tm
        createTm(int year, int month, int day, int hour, int minute, int second);
    };
}
