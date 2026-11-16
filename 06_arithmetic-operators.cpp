#include <iostream>

int main()
{
    using std::cout;

    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;

    double e = (a + b) / (a*(d - c));
    int f = c % b; // value left
    a++; // a = a + 1

    cout << e << '\n';
    cout << f << '\n';
    cout << a << '\n';

    return 0;
}