/**
 * @file Officer.cpp
 * @author Justin Finn
 * @date 2023-11-14
 * @brief officer file
 * 
 * .cpp file used to hold class methods for officer
 */

#include "Officer.h"
#include <iostream>

using namespace std;

Officer::Officer() {
  evilness = 500;
}

Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}

void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}

double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
