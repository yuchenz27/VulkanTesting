#include "first_app.h"

// std
#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <filesystem>

int main() {
    lve::FirstApp app{};
    
    try {
        app.run();
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}
