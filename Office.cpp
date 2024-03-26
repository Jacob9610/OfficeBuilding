//
// Created by Jacob Vazquez on 3/25/24.
//

#include "Office.h"
//#include "Employee.h"
#include <iostream>
using namespace std;
Office::Office(){

}
Office::Office(int officeNumber)
{
this->officeNumber = officeNumber;
//this->employee = *employee;
}
Office::~Office()
{
    cout<<"Office destructor called";
}