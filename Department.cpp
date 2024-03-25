#include <iostream>
#include "Department.h"
using namespace std;
Department::Department(){
    
}
Department::Department(string departmentName){
this -> departmentName = departmentName;
}
Department::~Department(){
    cout << "Department Destructor called";

}
string Department:: getDepartmentName(){
    return this->departmentName;
}
void Department::setDepartmentName(string departmentName){
    this->departmentName = departmentName;
}