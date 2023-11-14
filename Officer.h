/**
 * @file Officer.h
 * @author Justin Finn
 * @date 2023-11-14
 * @brief header file
 * 
 * header file that holds the officer class
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"


/**
 * class that holds data
 *
 * @class Officer Officer.h "Deo/Officer.h"
 * @brief class that holds and manipulates data
 *
 */
class Officer : public Employee {
 private:
  double evilness;
 public:

/**
 * prints data
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void print();

/**
 * calculates pay
 *
 * @pre 
 * @return double 
 * @post 
 * 
 */
  double calculatePay();

/**
 * constructor
 *
 * @pre 
 * @post 
 * 
 */
  Officer();

/**
 * Copy constructor for officer class
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * @param double evilness 
 * @pre 
 * @post 
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
