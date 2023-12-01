#include <iostream>
#include <string>
#include <fstream>
#include "Temperature.h"

using namespace std;
using namespace utility::temperature;

int main()
{
    float start = 0;
    float end = 0;
    cout << "Enter starting Fahrenheit temperature: ";
    cin >> start;
    cout << endl << "Enter ending Fahrenheit temperature: ";
    cin >> end;
    string filename;
    cout << endl << "Enter filename: ";
    cin >> filename;
    ofstream outfile(filename);

    for (float f = start; f <= end; f+=2)
    {
        Temperature t;
        t.fahrenheit = f;
        fromFahrenheit(&t);
        outfile << t.celsius << "c " << t.kelvin << "k " 
            << t.fahrenheit << "f" << endl;
    }
    outfile.close();
    
    return 0;
}


