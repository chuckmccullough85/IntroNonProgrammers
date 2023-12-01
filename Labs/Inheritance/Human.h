#pragma once

#include <string>

namespace payroll
{
    using namespace std;
    class Human
    {
    public:
        string getName() const { return name; }
        void setName(string value) { name = value; }

        virtual float pay() { return 0.0; }

    private:
        string name;
    };
}