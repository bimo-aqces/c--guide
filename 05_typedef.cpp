#include <iostream>

typedef std::string text_t;
using number = int;

int main()
{
    using std::cout;

    text_t a = "halo";
    number b = 13;

    cout << a << '\n';
    cout << b << '\n';

    return 0;
}