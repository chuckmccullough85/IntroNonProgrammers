#pragma once
#include <string>

namespace utility
{
    using namespace std;

    class Address
    {
    public:
       // Address() : Address("","", "", "") {}
        
        // OK
        // Address(string street, string city, string state, string zip) 
        //     : street(street), city(city), state(state), zip(zip) {}
        
        // Better
        Address(const string& street, string& city, string& state, string& zip) 
        {
            setStreet(street);
            setCity(city);
            setState(state);
            setZip(zip);
        }

        ~Address() {cout << "Address destructor: " << getStreet() << endl;}

        string getAddressLabel() const
        {
            string label;
            label = this->getStreet();
            label += '\n';
            label += getCity();
            label += ", ";
            label += getState();
            label += "  ";
            label += getZip();
            return label;
        }

        string getStreet() const { return street; }
        void setStreet (const string& value) 
        {
            street = value;
        }
        string getCity() const { return city; }
        void setCity(string value)
        {
            city = value;
        }
        string getState() const  { return state; }
        void setState(string value)
        {
            state = value;
        }
        string getZip() const { return zip; }
        void setZip(string value)
        {
            zip = value;
        }

    private:
        string street;
        string city;
        string state;
        string zip;
    };
}
