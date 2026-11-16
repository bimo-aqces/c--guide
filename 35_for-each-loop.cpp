#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string members[] = {"amba", "fuad", "rusdi", "azril", "farhan"};

    for (string member : members){
        cout << member << '\n';
    }

    return 0;
}