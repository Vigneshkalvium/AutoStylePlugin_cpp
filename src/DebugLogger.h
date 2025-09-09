#pragma once
#include <iostream>

class DebugLogger {
public:
    static void Log(const std::string& msg) {
        // Replace with InDesign SDK log output if needed
        std::cout << "[AutoStylePlugin] " << msg << std::endl;
    }
};
    