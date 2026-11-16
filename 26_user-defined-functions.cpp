#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::string;

void do_confession(string name, int age){
    cout << name << " suka loli sejak " << age << " tahun\n";
};

int main()
{
    string name;
    unsigned int age;
    
    cout << "\nenter name: ";
    getline(cin, name);
    cout << "\nenter age: ";
    cin >> age;

    do_confession(name, age);

    return 0;
}