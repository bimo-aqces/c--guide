#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string *name = nullptr;
    name = new string;
    *name = "rusdi\n";
    cout << *name;
    delete name;

    int size;
    char *grades = nullptr;
    grades = new char;
    cout << "enter size: "; cin >> size;
    grades[size];
    for (int i = 0; i < size; i++){
        cout << "enter grade: ";
        cin >> grades[i];
    }
    for (int i = 0; i < size; i++)
    {

        cout << grades[i];
    }
    delete grades;
}