#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::string;

double get_area(double side)
{
    return (pow(side, 2));
};
double get_area(double side, double sec_side)
{
    return (side * sec_side);
};

int main()
{
    cout << "\narea: " << get_area(3) << "m^2";
    cout << "\narea: " << get_area(3,4) << "m^2";

    return 0;
}