/**
 * @file Employee.h
 * @author Justin Finn
 * @date 2023-11-14
 * @brief class file
 * 
 * .h file that holds the employee class 
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H


/**
 * employee class that hold data
 *
 * @class Employee Employee.h "Deo/Employee.h"
 * @brief class that hold and manipulates data
 *
 */
class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:
  

/**
 * prints employee data
 *
 * @pre 
 * @return virtual 
 * @post 
 * 
 */
  virtual void print();

/**
 * calculates pay for employees
 *
 * @pre 
 * @return virtual 
 * @post paid amount
 * 
 */
  virtual double calculatePay();

/**
 * anniversary
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void anniversary();

/**
 * constructor 
 *
 * @pre 
 * @post 
 * 
 */

  Employee();

/**
 * copy constructor for employee class
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * @pre 
 * @post 
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
