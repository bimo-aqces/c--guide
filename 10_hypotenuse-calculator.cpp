#include <iostream>
#include <cmath>

int main()
{

    using std::cin;
    using std::cout;

    double a;
    double b;

    cout << "enter a val: ";
    cin >> a;
    cout << "enter b val: ";
    cin >> b;
    cout << "side c is: " << sqrt(pow(a, 2) + pow(b, 2));

    return 0;
}