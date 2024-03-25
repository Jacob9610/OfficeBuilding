#include <iostream>
#include <string>
#include "Employee.h"
#include "Department.h"
using namespace std;
int main() {
    cout << "Hello, World!" << endl;

Employee* emp1 = new Employee("john",45);
Department* dep =  new Department("fuck this assignment");
cout << emp1->getName() << endl;
cout << emp1->getidNumber()<< endl;
cout << dep->getDepartmentName() << endl;

delete emp1;
delete dep;
    return 0;
    }

