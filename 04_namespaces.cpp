#include <iostream>

namespace alternate{
    int a = 1;
}

int main()
{
    using std::cout;

    using namespace alternate;
    cout << a << '\n'; // printing alternate cuz prev line

    int a = 2;
    cout << a << '\n'; // printing local cuz prev line

    cout << alternate::a << '\n'; // printing alternate cuz direct

    return 0;
}