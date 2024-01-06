#include "Employee.h"

Employee::Employee(){
    name = "None";
    id = 0;
    level = "None";
    yearsOfWorking = 0;
    department = "None";
    role = "None";
};

//setter function
void Employee::setEmployee(string n, int i, string l, double y, string d, string r){
    name = n;
    id = i;
    level = l;
    yearsOfWorking = y;
    department = d;
    role = r;
            
};


//get Employee Name function
string Employee::getEmployeeName(){
    return name;
            
}
        
        //get Employee ID function
int Employee::getEmployeeID(){
    return id;
            
}
        //get Employee Level function
string Employee::getEmployeeLevel(){
    return level;
            
}
        
        //get Employee Years of working function
double Employee::getEmployeeYears(){
    return yearsOfWorking;
            
}
        //get Employee's department function
string Employee::getEmployeeDepartment(){
    return department;
}
        //get Employee's role function
string Employee::getEmployeeRole(){
    return role;

}
