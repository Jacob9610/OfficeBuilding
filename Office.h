//
// Created by Jacob Vazquez on 3/25/24.
//

#ifndef OFFICEBUILDING_OFFICE_H
#define OFFICEBUILDING_OFFICE_H
#include "Employee.h"
#include <iostream>
using namespace std;
class Office {
public:
    Office();
    Office(int);
    ~Office();
    private:
int officeNumber;
Employee employee; 
};



#endif //OFFICEBUILDING_OFFICE_H