//
// Created by Jacob Vazquez on 3/16/24.
//

#ifndef OFFICEBUILDING_EMPLOYEE_H
#define OFFICEBUILDING_EMPLOYEE_H
#include <iostream>
#include "Department.h"
#include "Office.h"
using namespace std;
class Employee{
    public:
   
    Employee getEmployee();
    Employee();
     Employee(string, int);
    ~Employee();
    Employee(string, int, Department *,Office *);
     string getName();
    void setName(string);
    int getidNumber();
    void setidNumber(int);
  Department getDepartment();
    void setDepartment(Department );
   Office getOffice();
   void setOffice(Office);

private:
    string name;
    int idNumber;
    Department department;
    Office office;

};
#endif //OFFICEBUILDING_EMPLOYEE_H
