#include <iostream>
#include <cmath>

int main()
{
    using std::cin;
    using std::cout;

    int age;
    bool married;
    cout << "\nenter age: ";
    cin >> age;
    cout << "\nmarried? (1/0): ";
    cin >> married;

    age > 18 ? cout << "u r legal\n" : cout << "u r illegal\n";
    cout << (married ? "u r married" : "u r single");

    return 0;
}