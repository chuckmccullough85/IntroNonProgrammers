#include <iostream>
#include "Employee.h"
#include "Contractor.h"
#include "Payroll.h"
using namespace std;
using namespace payroll;

int main()
{
    Employee    emp;
    emp.setName("John Doe");
    emp.setSalary(1000);
 
    Contractor  cont;
    cont.setName("Jane Doe");
    cont.setRate(25);

    pay(emp);
    pay(cont);
 }