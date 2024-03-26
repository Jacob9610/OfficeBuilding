//
// Created by Jacob Vazquez on 3/25/24.
//

#include "Office.h"

#include <iostream>
using namespace std;
Office::Office(){

}
Office::Office(int officeNumber, Employee *employee)
{
this->officeNumber = officeNumber;
this->employee = employee;
}
Office::~Office()
{
    cout<<"Office destructor called";
}


 void Office::setOfficeNumber(int officeNumber){
        this-> officeNumber = officeNumber;

 }
    void Office::setEmployee(Employee *employee){
            this->employee = employee;

    }


    int Office::getOfficeNumber(){


    }
    Employee* Office::getEmployee(){
            return this-> employee;

    }