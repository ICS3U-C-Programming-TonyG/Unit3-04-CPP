// Copyright (c) Year Tony G All rights reserved.

// Created By: Tony G

// Date: 2025-03-26

// Tells user if integer is zero, positive or negative.

#include <iostream>

int main() {
    // Greeting message
    std::cout << "Greetings! Please input a number" << std::endl;

    // Get user input
    float number;
    std::cout << "Please enter a number: ";
    std::cin >> number;

    // Checks if number is positive, negative, or zero
    if (number < 0) {
        std::cout << "The integer is a negative number" << std::endl;
    } else if (number > 0) {
        std::cout << "The integer is a positive number" << std::endl;
    } else {
        std::cout << "The number is zero" << std::endl;
    }
}
