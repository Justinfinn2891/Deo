/**
 * @file Supervisor.h
 * @author Justin Finn
 * @date 2023-11-14
 * @brief header file
 * 
 * header file that holds the supervisor class
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"


/**
 * class that holds data
 *
 * @class Supervisor Supervisor.h "Deo/Supervisor.h"
 * @brief class that holds and manipulates data
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised;
 public:

/**
 * prints out data
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
 * constructor for class
 *
 * @pre 
 * @post 
 * 
 */

  Supervisor();

/**
 * copy constructor for class
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * @param int numSupervised 
 * @pre 
 * @post 
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
