#include <iostream>

int main() {
    int a, b;

    std::cout << "Enter the first number (a): ";
    std::cin >> a;

    std::cout << "Enter the second number (b): ";
    std::cin >> b;

    // Check which number is greater
    if (a > b) {
        std::cout << "1.1. a is greater than b." << std::endl;
    } else if (a < b) {
        std::cout << "1.1. b is greater than a." << std::endl;
    } else {
        std::cout << "1.1. a and b are equal." << std::endl;
    }

    // Check if both numbers are positive
    if (a > 0 && b > 0) {
        std::cout << "1.2. Both a and b are positive." << std::endl;
    }

    // Check if both numbers are negative
    if (a < 0 && b < 0) {
        std::cout << "1.3. Both a and b are negative." << std::endl;
    }

    // Check if both numbers are zero
    if (a == 0 && b == 0) {
        std::cout << "1.4. Both a and b are zero." << std::endl;
    }

    // Check if the first number is positive or negative
    if (a > 0) {
        std::cout << "1.5. a is positive." << std::endl;
    } else if (a < 0) {
        std::cout << "1.5. a is negative." << std::endl;
    } else {
        std::cout << "1.5. a is zero." << std::endl;
    }

    // Check if the second number is positive or negative
    if (b > 0) {
        std::cout << "1.6. b is positive." << std::endl;
    } else if (b < 0) {
        std::cout << "1.6. b is negative." << std::endl;
    } else {
        std::cout << "1.6. b is zero." << std::endl;
    }

    return 0;
}