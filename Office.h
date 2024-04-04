//
// Created by Jacob Vazquez on 3/25/24.
//

#ifndef OFFICEBUILDING_OFFICE_H
#define OFFICEBUILDING_OFFICE_H
//#include "Employee.h"   /// you cant #include "Employee" here and #include "Office" in Employee.h
#include <iostream>
using namespace std;
class Employee;
class Floor;
class Office {
    private:
int officeNumber;
int floor;

public:
    Office();
    
    Office(int, int);
    ~Office();

    void setOfficeNumber(int);
    int getfloor();
    int getOfficeNumber();
    
    


};



#endif //OFFICEBUILDING_OFFICE_H