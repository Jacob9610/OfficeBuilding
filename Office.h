//
// Created by Jacob Vazquez on 3/25/24.
//

#ifndef OFFICEBUILDING_OFFICE_H
#define OFFICEBUILDING_OFFICE_H
//#include "Employee.h"   /// you cant #include "Employee" here and #include "Office" in Employee.h
#include <iostream>
using namespace std;
class Employee;
class Office {
    private:
int officeNumber;
Employee* employee;
public:
    Office();
    Office(int, Employee*);
    ~Office();

    void setOfficeNumber(int);
    void setEmployee(Employee*);
    int getOfficeNumber();
    Employee* getEmployee();
    


};



#endif //OFFICEBUILDING_OFFICE_H