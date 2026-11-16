#include <iostream>
using std::cin;
using std::cout;
using std::string;

void printAll(const string &name, const int &age){
    cout << name << ", " << age;
}

int main()
{
    string name = "ambatubas";
    int age = 32;

    printAll(name, age);
}

