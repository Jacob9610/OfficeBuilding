//
// Created by Jacob Vazquez on 3/25/24.
//

#include "Office.h"

#include <iostream>
using namespace std;
Office::Office(){

}
Office::Office(int officeNumber, int floor)
{
    this->officeNumber = officeNumber;
    this->floor = floor;

}
Office::~Office()
{

}


 void Office::setOfficeNumber(int officeNumber){
        this-> officeNumber = officeNumber;

 }
    


    int Office::getOfficeNumber(){
        return this->officeNumber;
    }
    int Office::getfloor(){
        return this->floor;
    }