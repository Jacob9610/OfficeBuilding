#include <iostream>
#include <string>
#include "Employee.h"
#include "Department.h"
#include "Office.h"
using namespace std;
int main() {
    cout << "Hello, World!" << endl;
    Department* dep =  new Department("fuck this assignment");
    Office* office =  new Office();
    Employee* emp1 = new Employee("john" , 45 , dep, office);


cout << emp1->getName() << endl;
cout << emp1->getidNumber()<< endl;
cout << emp1->getDepartment().getDepartmentName() << endl;
//
delete emp1;
delete dep;
delete office;
    return 0;
    }

