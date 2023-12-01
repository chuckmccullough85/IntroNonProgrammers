#pragma once
#include <string>
#include "Human.h"

namespace payroll
{
    using namespace std;
    constexpr float TAX_RATE = 0.0765;
    class Employee : public Human
    {
    public:
        float getSalary() const { return salary; }
        void setSalary(float value) { salary = value; }

        float pay() override { return salary - (salary * TAX_RATE); }

    private:
        float salary;
    };
}