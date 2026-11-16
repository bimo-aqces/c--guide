#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    using std::getline;
    using std::string;
    using std::ws;

    string name;
    string full_name;

    cout << "enter first name: ";
    cin >> name; // problem: cant hold string with space
    cout << "ur fisrt name is " << name << '\n';

    cout << "enter full name: ";
    getline(cin >> ws, full_name); // getline can hold space, and ws contain prev enter
    cout << "ur full name is " << full_name << '\n';

    return 0;
}