// Copyright (c) 2021 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Created on: Dec. 6, 2021
// This program calculates the finl cost of an item with
// tax in Prince Edward Island
#include <iostream>
#include <iomanip>


// declare constants
float HST = 0.15;

// declare variables
float subtotal, totalTax, finalCost;


int main() {
  // get input from user
  std::string userAnswer;
  std::cout << "This program calculates the total cost of and item plus tax";
  std::cout << " in Prince Edward Island.\n";
  std::cout << " \n";
  std::cout << "Enter your subtotal: ";
  std::cin >> subtotal;

  // calculate the cost
  totalTax = HST * subtotal;
  finalCost = totalTax + subtotal;

  // display the results to the user
  std::cout << std::endl;
  std::cout << "The final cost of your item is $" << std::fixed <<
  std::setprecision(2) << std::setfill('0') << finalCost << "\n";



  // Ask if user would like to calculate again
  std::cout << "Would you like to calculate again? Y or N\n";
  std::cin >> userAnswer;

  if (userAnswer == "Y") {
      main();
  } else { }
}
