//
// Created by Jacob Vazquez on 3/16/24.
//
#include <iostream>
#include "Department.h"
using namespace std;
#ifndef OFFICEBUILDING_EMPLOYEE_H
#define OFFICEBUILDING_EMPLOYEE_H
class Employee{
    public:
    string getName();
    void setName(string);
    int getidNumber();
    void setidNumber(int);
  Department getDepartment();
    void setDepartment(Department );
   // Office getOffice();
   // void setOffice(Office office);
    Employee getEmployee();
    Employee();
    ~Employee();
    Employee(string, int, Department *);


private:
    string name;
    int idNumber;
   Department department;
    //Office office

};
#endif //OFFICEBUILDING_EMPLOYEE_H
