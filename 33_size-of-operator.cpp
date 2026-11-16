#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::string;

int main()
{
    double a = 3.21;
    char b = 'B';
    bool c = true;
    string d = "halo";
    string member[] = {"amba", "fuad", "rusdi", "azril", "farhan"};

    cout << '\n' << sizeof(a) << " bytes (double)";
    cout << '\n' << sizeof(b) << " bytes (char)";
    cout << '\n' << sizeof(c) << " bytes (bool)";
    cout << '\n' << sizeof(d) << " bytes (string)";
    cout << '\n' << sizeof(member) / sizeof(string) << " elements (array's elements)";
    return 0;
}