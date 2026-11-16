#include <iostream>
#include <cmath>

int main()
{

    using std::cout;
    using std::max;
    using std::min;

    double a = max(4, 2);
    double b = min(4, 2);
    double c = pow(4, 2); // 4^2
    double d = sqrt(4); // 4^(1/2)
    double e = round(3.5); // >.5 is up, else down
    double f = floor(3.9);
    double g = ceil(3.1);

    cout << a << '\n';
    cout << b << '\n';
    cout << c << '\n';
    cout << d << '\n';
    cout << e << '\n';
    cout << f << '\n';
    cout << g << '\n';

    return 0;
}