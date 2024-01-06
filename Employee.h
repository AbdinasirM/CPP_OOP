#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
using namespace std;

class Employee {
    private:
        string name;
        int id;
        string level;
        double yearsOfWorking;
        string department;
        string role;
    public:
        //constructor to set the default values
        Employee();
        //encapsulation:
        //setter function
        void setEmployee(string n, int i, string l, double y, string d, string r);
        
        //get Employee Name function
        string getEmployeeName();
        
        //get Employee ID function;
        int getEmployeeID();
        
        //get Employee Level function
        string getEmployeeLevel();
        
        //get Employee Years of working function
        double getEmployeeYears();
        
        //get Employee's department function
        string getEmployeeDepartment();
        
        //get Employee's role function
        string getEmployeeRole();

};

#endif
