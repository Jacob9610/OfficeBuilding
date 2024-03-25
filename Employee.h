//
// Created by Jacob Vazquez on 3/16/24.
//
#include <iostream>
using namespace std;
#ifndef OFFICEBUILDING_EMPLOYEE_H
#define OFFICEBUILDING_EMPLOYEE_H
class Employee{
    public:
    string getName();
    void setName(string name);
    int getidNumber();
    void setidNumber(int);
  /*  Department getDepartment();
    void setDepartment(Department department);
    Office getOffice();
    void setOffice(Office office);*/
    Employee getEmployee();
    Employee();
    ~Employee();
    Employee(string, int);


private:
    string name;
    int idNumber;
   //Department department;
    //Office office

};
#endif //OFFICEBUILDING_EMPLOYEE_H
