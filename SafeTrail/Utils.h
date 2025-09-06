#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <sstream>
#include <vector>

// Helper to convert "hh:mm" to minutes since 00:00
inline long long parseTime(const std::string& timeStr) {
    int hh, mm;
    char sep;
    std::stringstream ss(timeStr);
    ss >> hh >> sep >> mm;
    return hh * 60 + mm;
}

// Maybe add more helpers later (logging, formatting, etc.)

#endif
