#include <iostream>
#include "Department.h"
using namespace std;

Department::Department(){
    
}
Department::Department(string departmentName,Employee *employees ){
this -> departmentName = departmentName;
*this ->employees = employees;
}
Department::Department(string departmentName){
this -> departmentName = departmentName;
}

Department::~Department(){
    cout << "Department Destructor" << endl;

}
string Department:: getDepartmentName(){
    return this->departmentName;
}
void Department::setDepartmentName(string departmentName){
    this->departmentName = departmentName;
}
void Department::setEmployees(Employee *employee){

    this ->employees[this->numEmployees] = employee;


}
void Department::incrementEmployees(){
this->numEmployees++;

}

Employee* Department::displayEmployees(){
    
         return this->employees;
    
    
}