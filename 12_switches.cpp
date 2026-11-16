#include <iostream>
#include <cmath>

int main()
{
    using std::cin;
    using std::cout;

    char grade;
    cout << "enter grade (A-C): ";
    cin >> grade;

    switch(grade){
        case 'A':
            cout << "ok";
            break;
        case 'B':
            cout << "mid";
            break;
        case 'C':
            cout << "bad";
            break;
        default:
            cout << "invalid";
    }
    return 0;
}