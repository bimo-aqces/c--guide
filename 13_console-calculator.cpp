#include <iostream>
#include <cmath>

int main()
{
    using std::cin;
    using std::cout;

    char op;
    double val1;
    double val2;

    cout << "\nenter the op: ";
    cin >> op;
    cout << "\nenter val 1: ";
    cin >> val1;
    cout << "\nenter val 2: ";
    cin >> val2;
    
    switch(op){
        case '+':
            cout << "result = " << val1 + val2;
            break;
        case '-':
            cout << "result = " << val1 - val2;
            break;
        case '*':
            cout << "result = " << val1 * val2;
            break;
        case '/':
            cout << "result = " << val1 / val2;
            break;
        }

    return 0;
}