#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::string;

string word = "rusdi";

void do_scream()
{
    string word = "amba\n";
    cout << word;
};

int main()
{
    string word = "fuad";
    do_scream(); // use local in function = amba
    cout << word << '\n'; // use local in main = fuad
    cout << ::word << '\n'; // use global = rusdi

    return 0;
}