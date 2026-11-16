#include <iostream>

int main()
{
    using std::cout;
    double a = 0.8;
    int b = int(a); // int make 0.8 goes into 0

    int c = 8;
    int d = 10;
    double e = c / (double)d; // (double)d convert int d to double, so e can be 0.8 

    cout << b << '\n';
    cout << e << '\n';

    return 0;
}