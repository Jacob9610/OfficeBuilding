#include <iostream>
#include "Department.h"
#include "Employee.h"
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
   ;

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

void Department::displayEmployees(){
    
         //here i will loop through the employeees
         for (int  i = 0; i < 29; i++)
         { cout << "fuck";
            cout << this->employees[i]->getName();
         }
         
    
    
}