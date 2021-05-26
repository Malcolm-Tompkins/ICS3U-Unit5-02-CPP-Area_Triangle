// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on May 26, 2021
// Converts temps in celsius to fahrenheit

#include <iostream>
#include <string>



void area_of_triangle(int user_base, int user_height) {
    int area;

    area = user_base * user_height / 2;
    std::cout << area << "mm² is the area of your triangle";
}
main(int user_height, int user_base) {
    std::string user_input1, user_input2;
    std::cout << "Enter the base of your triangle (mm): ";
    std::cin >> user_input1;
    std::cout << "Enter the base of your triangle (mm): ";
    std::cin >> user_input2;
    try {
        user_base = std::stoi(user_input1);
        try {
            user_height = std::stoi(user_input2);
            area_of_triangle(user_base, user_height);
        } catch (std::invalid_argument) {
            std::cout << user_input2 << " is not a positive integer";
        }
    } catch (std::invalid_argument) {
        std::cout << user_input1 << " is not a positive integer";
}
}
