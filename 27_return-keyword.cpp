#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::string;

double get_area(double side)
{
    return (pow(side,2));
};

double get_vol(double side)
{
    return (pow(side, 3));
};

int main()
{
    unsigned int side;

    cout << "\nenter side: ";
    cin >> side;

    cout << "\narea: " << get_area(side) << "m^2";
    cout << "\nvolume: " << get_vol(side) << "m^3";

    return 0;
}