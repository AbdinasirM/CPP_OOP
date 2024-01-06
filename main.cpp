
#include <iostream>
#include "Employee.h"

using namespace std;


// Function to display information about an employee
void displayEmployeeInfo(Employee &employee) {
    cout<<"Name: "<<employee.getEmployeeName()<<endl<<"ID: "<<employee.getEmployeeID()<<endl<<"Level: "<<employee.getEmployeeLevel()<<endl<<"Department: "<<employee.getEmployeeDepartment()<<endl<<"Role: "<<employee.getEmployeeRole()<<endl;
    cout<<endl;
};


int main()
{
    Employee mydevs, myEng, myHR;


  
    mydevs.setEmployee("abdi", 1234, "Junior",0.5, "Web development", "design UI");
    myEng.setEmployee("Jane", 5612, "Senior",3.5, "Engineering", "Building");
    myHR.setEmployee("John", 1698, "Senior",4, "HR", "TimeSheet");
    
    displayEmployeeInfo(mydevs);
    /*
Name: abdi
ID: 1234
Level: Junior
Department: Web development
Role: design UI
    
    */
    displayEmployeeInfo(myEng);
    
    /*
    Name: Jane
ID: 5612
Level: Senior
Department: Engineering
Role: Building
    
    */
    
    
    displayEmployeeInfo(myHR);
   /*
Name: John
ID: 1698
Level: Senior
Department: HR
Role: TimeSheet
   */

    return 0;
}
