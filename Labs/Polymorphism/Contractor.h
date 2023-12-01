#pragma once

#include <string>
#include "Human.h"
namespace payroll
{
    using namespace std;
    class Contractor : public Human
    {
    public:
        float getRate() const { return rate; }
        void setRate(float value) { rate = value; }

        float pay() override { return rate * 40; }

    private:
        string name;
        float rate;
    };
}