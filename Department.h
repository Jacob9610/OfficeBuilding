//
// Created by Jacob Vazquez on 3/24/24.
//
#include <iostream>
using namespace std;
#ifndef OFFICEBUILDING_DEPARTMENT_H
#define OFFICEBUILDING_DEPARTMENT_H
class Department{
private:
//Employee employee;
string departmentName;
public: 
Department();
//Department(string departmentName, vector employees);
~Department();
Department(string departmentName);
string getDepartmentName();
void setDepartmentName(string departmentName);

};
#endif //OFFICEBUILDING_DEPARTMENT_H
