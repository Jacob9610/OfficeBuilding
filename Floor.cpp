#include "Floor.h"
#include <iostream>
using namespace std;
Floor::Floor(int floorNum, Office *office)
{
    this-> floorNum = floorNum;
    *this->office = office;
}
Floor::Floor(int floorNum, int officenum)
{
    this-> floorNum = floorNum;
    this->officenum = officenum;
}
Floor::Floor(){

}
Floor::~Floor()
{
    cout << "floor Destructor";
}