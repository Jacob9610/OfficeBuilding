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
        Office tmpoffice= Office();
        Employee tmpemp = Employee(empName,id);//need dep and office
        tmpemp.setOffice(tmpoffice);//need dep
        tmpemp.setDepartment(tmpdep);//full employee
        employees->push_back(tmpemp);//new emplyee added to vector.


       cout << employees->at(0).getName();/// wooo hooo


        departments->push_back(tmpdep);

         //    tmpdep.setEmployees(tmpemp);//add employee to a departments array of employees.



        //adding department
        for (int i = 0; i < departments->size(); i++ ) {

            if (tmpdep.getDepartmentName() == departments->at(i).getDepartmentName()    )//checking names against each other
           {
                cout << "found";
                

           }
    
    
    }
       //Floor floor =  Floor(floor,office);



       


        //loop through dept and add new emp to it

        
    
    }



int main() {

        /*
        here i will be creating the vectors that i need to keep track of the departments
        and a vector of employee.
        */
        vector<Employee> employees;
        vector<Department> departments;
        Floor* floors = new Floor[10];
       




    cout << "1) Add a new Employee\n2)Look up Employee\n3)List a Department\n4)List offices on Floor"; 
    addEmployee(&employees,&departments);
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

    
