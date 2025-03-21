// Copyright (c) 2025 Jayden Smith All rights reserved.
// Created by: Jayden Smith
// Date: March 19, 2025
// This is a number guessing game.


#include <iostream>
int main() {
    // Define the constants
    const int RANDOMNUMBER = 8;
    // Define variables
    int userGuess;
    std::cout << "Pick a number from 1-9:\n";
    std::cin >> userGuess;
    // Checks if user guess is right
    if (userGuess == RANDOMNUMBER)
        std::cout << "You got it right!\n";
    // Checks if user guess is wrong
    if (userGuess != RANDOMNUMBER)
        std::cout << "Wrong try again!\n";
}
