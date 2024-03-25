//
// Created by Jacob Vazquez on 3/16/24.
//
#include "Employee.h"
#include <string>
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
Employee::Employee(){
}
Employee::Employee(string name, int idNumber){
    this -> name = name;
    this -> idNumber = idNumber;
}
Employee::~Employee(){
    cout<< "destroying Employee" << endl;
}