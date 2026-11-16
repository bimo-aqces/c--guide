#include <iostream>
using std::cin;
using std::cout;
using std::string;

void swapElements(string &x, string &y){
    string temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    string x = "re";
    string y = "ro";

    swapElements(x, y);

    cout << x << ',' << y;
}