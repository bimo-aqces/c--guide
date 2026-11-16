#include <iostream>
#include <cmath>

int main()
{
    using std::cin;
    using std::cout;

    cout << "\nkelvin & celcius";

    double temp;
    char unit;

    cout << "\nwhat unit u have? (K/k/C/c)";
    cin >> unit;
    if(unit == 'k' || unit == 'K'){
        cout << "\benter kelvin: ";
        cin >> temp;
        cout << "\ncelcius unit: " << temp - 273.15;
    }
    else if (unit == 'c' || unit == 'C')
    {
        cout << "\benter celcius: ";
        cin >> temp;
        cout << "\nkelvin unit: " << temp + 273.15;
    }

    return 0;
}