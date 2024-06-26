//
// Created by Jacob Vazquez on 3/24/24.
//
#include <iostream>
using namespace std;
#ifndef OFFICEBUILDING_DEPARTMENT_H
#define OFFICEBUILDING_DEPARTMENT_H
class Employee;
class Department{
private:
Employee* employees[30];
string departmentName;
int numEmployees;
public: 
Department();
Department(string departmentName);
Department(string departmentName, Employee*);
~Department();


string getDepartmentName();
void setDepartmentName(string departmentName);
void setEmployees(Employee*);
void incrementEmployees();
int numOfEmployees();
void displayEmployees();


};
#endif //OFFICEBUILDING_DEPARTMENT_H
