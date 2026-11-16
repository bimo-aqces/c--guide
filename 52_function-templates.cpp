#include <iostream>
using std::cin;
using std::cout;
using std::string;
template <typename A, typename B>

auto getMax(A x, B y){
    return (x > y) ? x : y;
}

int main()
{
    cout << getMax(3.56, 2);
}