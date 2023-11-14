/**
 * @file Employee.cpp
 * @author Justin Finn
 * @date 2023-11-14
 * @brief .cpp file that holds methods for employee class
 * 
 * .cpp file that holds the functions used in main.cpp for the class Employee in employee.h
 */

#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee() {
  ID = years = hoursWorked = hourlyRate = -1;
}

Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}

void Employee::print() {
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}

void Employee::anniversary() {
  years++;
  hourlyRate = hourlyRate + hourlyRate * .002;
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!"
       << endl;
}

double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}

