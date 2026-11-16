#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string jmk48 = "drdevuncekmanual";
    string *pJmkmania = &jmk48;

    string abc[3] = {"a", "b", "c"};
    string *pAbc = abc;

    cout << *pJmkmania << '\n';
    cout << *pAbc << '\n';
}