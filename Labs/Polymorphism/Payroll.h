#pragma once

#include <iostream>
#include "Human.h"

namespace payroll
{
    using namespace std;
    void pay(Human& person)
    {
        cout << person.getName() << " is paid " << person.pay() << endl;
    }
}
