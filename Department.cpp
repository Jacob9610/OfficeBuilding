#include <iostream>
#include "Department.h"
using namespace std;
Department::Department(){
    
}
Department::Department(string departmentName,Employee *employees ){
this -> departmentName = departmentName;
*this ->employees = employees;
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