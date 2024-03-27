//
// Created by Jacob Vazquez on 3/25/24.
//

#include "Office.h"

#include <iostream>
using namespace std;
Office::Office(){

}
Office::Office(int officeNumber, Employee *employee, Floor *floor)
{
this->officeNumber = officeNumber;
this->employee = employee;
this->floor = floor;
}
Office::~Office()
{
    cout<<"Office Destructor" <<endl;
}


 void Office::setOfficeNumber(int officeNumber){
        this-> officeNumber = officeNumber;

 }
    void Office::setEmployee(Employee *employee){
            this->employee = employee;

    }


    int Office::getOfficeNumber(){
        return this->officeNumber;
    }
    Employee* Office::getEmployee(){
            return this-> employee;

    }