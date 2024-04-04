#include <iostream>
#include <string>
#include "Employee.h"
#include "Department.h"
#include "Office.h"
#include "Floor.h"
#include <vector>
using namespace std;




void addEmployee(vector<Employee>* employees, vector<Department>* departments){

        cout << "Enter employee name: ";
        string empName;
        cin >> empName;
         cout << "\nEnter employee ID number: ";
        int id;
        cin >> id;
        cout << "\nEnter department name: ";
        string depName;
        cin >> depName;
        cout << "\nEnter Office number: ";
        int office,floor;
        cin >>office;
        floor = office / 100;
        office=office % 100;


        
        Department tmpdep = Department(depName);
        Office tmpoffice= Office( office,floor);
        Employee tmpemp = Employee(empName,id);//need dep and office
        tmpemp.setOffice(tmpoffice);//need dep
        tmpemp.setDepartment(tmpdep);//full employee
        employees->push_back(tmpemp);//new emplyee added to vector.


       


        //departments->push_back(tmpdep);

         //    tmpdep.setEmployees(tmpemp);//add employee to a departments array of employees.


        
        //adding department
       /* for (int i = 0; i < departments->size(); i++ ) {

            if (tmpdep.getDepartmentName() == departments->at(i).getDepartmentName()    )//checking names against each other
           {
            departments->at(i).incrementEmployees();
                departments->at(i).setEmployees(&tmpemp);
                


           }
           else{
            tmpdep.incrementEmployees();
            tmpdep.setEmployees(&tmpemp);
            
            departments->push_back(tmpdep);
            

           }
         }*/
       //Floor floor =  Floor(floor,office);

        
    
    }
    void lookUpEmployee(vector<Employee>* employees ){
            int idLookUp;
        cout << "enter ID number: ";
        cin >> idLookUp;

        for (int i = 0; i < employees->size(); i++)
        if (idLookUp == employees->at(i).getidNumber() ){
            cout<<  employees->at(i).getName() << ", #"<< employees->at(i).getidNumber() << ", works in the "<< employees->at(i).getDepartment().getDepartmentName() << " department in office" << endl;
        }
    }
void  listADepartment(vector<Department>*departments, vector<Employee>* employees){
    string tmpdep;

        cout << "what department would you like to display?";
        cin >> tmpdep;
        cout << "The employees who work in the department are :" << endl;
        
for (int i = 0; i < employees->size(); i++)
{

   if (tmpdep == employees->at(i).getDepartment().getDepartmentName() ){
       cout <<  employees->at(i).getName() << ",#" << employees->at(i).getidNumber() << endl;
   }
}




}
   void listFloorEmployees(vector<Employee>* employees){
    cout << "What floor would you like to display?\n";
    int floorNum;
    cin >> floorNum;
    for (int i = 0; i < employees->size(); i++)
{

   if (floorNum == employees->at(i).getOffice().getfloor() ){
       cout <<  employees->at(i).getName() << ",#" << employees->at(i).getidNumber() << endl;
   }
}


   }


int main() {

        /*
        here i will be creating the vectors that i need to keep track of the departments
        and a vector of employee.
        */
        vector<Employee> employees;
        vector<Department> departments;
        Floor* floors = new Floor[10];
        int menuSelection;
       

do{


    cout << "1) Add a new Employee\n2)Look up Employee\n3)List a Department\n4)List offices on Floor\n";
    cin>> menuSelection;
    if (menuSelection == 1){
    addEmployee(&employees,&departments);}
    else if (menuSelection == 2){
    lookUpEmployee(&employees);

    }
    else if(menuSelection == 3){
        listADepartment(&departments ,&employees);

    }
    else if(menuSelection == 4) {
        listFloorEmployees(&employees);

    }
    }while(menuSelection != 5);
   /* Department* dep =  new Department();/////////////////
    Office* office =  new Office();
    Employee* emp1 = new Employee("john" , 45 , dep, office);
    office->setEmployee(emp1);

cout << emp1->getName() << endl;
cout << emp1->getidNumber()<< endl;
cout << emp1->getDepartment().getDepartmentName();
cout << office->getEmployee()->getName();

delete emp1;
delete dep;
delete office;*/
//delete employees;
//delete departments;
    return 0;
    }

    
