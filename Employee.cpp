//
// Created by Jacob Vazquez on 3/16/24.
//
#include "Employee.h"
#include "Department.h"
#include <string>

Employee::Employee(){
}
Employee::Employee(string name, int idNumber, Department* department){
    this -> name = name;
    this -> idNumber = idNumber;
    this -> department = *department;
}
Employee::~Employee(){
    cout<< "destroying Employee" << endl;
}
string Employee::getName() {
    return this -> name;
}
void Employee::setName(string name){
    this -> name = name;
}
int Employee::getidNumber(){

    return this->idNumber;
}
void Employee::setidNumber(int idNumber){
    this -> idNumber = idNumber;
}
Department Employee::getDepartment(){
    return this->department;
}
void  Employee::setDepartment(Department department){
    this -> department = department;
}
