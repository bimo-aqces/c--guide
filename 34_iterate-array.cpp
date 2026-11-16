#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::string;


int main()
{
    string member[] = {"amba", "fuad", "rusdi", "azril", "farhan"};
    char grade[] = {'A', 'B', 'C', 'D', 'E'};

    for (int i = 0; i < (sizeof(member) / sizeof(string)); i++)
    {
        cout << member[i] << ", tier: " << grade[i] << '\n';
    }

    return 0;
}