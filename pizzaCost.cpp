// Copyright (c) 2025 Amara Tie All rights reserved.

//

// Created by: Amara Tie

// Date: March 4, 2025

// Calculating the cost fo the pizza
#include <iostream>

int main() {
    // declare constants
    const float HST = 0.13;
    const float LABOUR_COST = 2.00;
    const float RENTAL_COST = 2.25;
    const float INGRED_COST = 1.5;

    // declare variables
    float diameter, total, tax, subtotal;

    // get the diameter from the user
    std::cout << "Enter the diameter of the pizza (inches): ";
    std::cin >> diameter;

    // calculate the total cost
    subtotal = LABOUR_COST + RENTAL_COST + INGRED_COST * diameter;
    tax = HST * subtotal;
    total = subtotal + tax;

    // display the total to the user
    std::cout << "\n";
    std::cout << "total = " << total << " $" << std::endl;
}