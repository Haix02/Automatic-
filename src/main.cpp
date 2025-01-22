#include <iostream>
#include <stdexcept>
#include "../include/CLI.h"


void showBanner() {
    std::cout << "=========================================\n";
    std::cout << "      Smart Task Automator v1.0          \n";
    std::cout << "=========================================\n";
    std::cout << " Secure, Reliable, and Easy Task Manager \n";
    std::cout << "-----------------------------------------\n";
}

int main() {
    try {
        // Display a banner for the user
        showBanner();

        // Initialize the Command-Line Interface
        CLI cli;

        // Run the CLI
        cli.run();

        std::cout << "Thank you for using Smart Task Automator. Goodbye!\n";
        return 0;

    } catch (const std::exception &ex) {
        std::cerr << "Error: " << ex.what() << "\n";
        return EXIT_FAILURE; // Standard error exit code
    } catch (...) {
        std::cerr << "An unexpected error occurred.\n";
        return EXIT_FAILURE; // Standard error exit code
    }
}
