// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Sept 2021
// This Program is about for loop

#include <iostream>
#include <string>

int main() {
    // This Program is about for loop
    int loopNumber = 0;
    int answerNumber = 0;

    std::string userString;
    int userNumberInt;
    float userNumberFloat;

    // input
    std::cout << "Please enter a positive integer: ";
    std::cin >> userString;
    std::cout << "" << std::endl;

    // process
    try {
        userNumberFloat = std::stof(userString);
        userNumberInt = std::stoi(userString);
        if (userNumberFloat == userNumberInt) {
            if (userNumberInt >= 0) {
               for (loopNumber = 0; loopNumber <= userNumberInt; loopNumber++) {
                   answerNumber = loopNumber * loopNumber;
                   std::cout << loopNumber << "² = "
                   << answerNumber << "." <<std::endl;
               }
            } else {
                std::cout << "You didn't enter a positive integer."
                << std::endl;
            }
        } else {
            std::cout << "You didn't enter an integer." << std::endl;
        }
    } catch (std::invalid_argument) {
        // output
        std::cout << "You didn't enter an integer." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
