#include <iostream>
#include    "Employee.h"
#include    "Contractor.h"

using namespace std;
using namespace payroll;

int main()
{
    Employee    emp;
    emp.setName("John Doe");
    emp.setSalary(1000);
    cout << emp.getName() << " " << emp.pay() << endl;

    Contractor  cont;
    cont.setName("Jane Doe");
    cont.setRate(25);
    cout << cont.getName() << " " << cont.pay() << endl;
}