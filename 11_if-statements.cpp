#include <iostream>
#include <cmath>

int main()
{

    using std::cin;
    using std::cout;

    int x;
    cout << "enter x (1-10): ";
    cin >> x;

    if(x==5){
        cout << "correct";
    }
    else if (x < 5)
    {
        cout << "higher";
    }
    else
    {
        cout << "lower";
    }

    return 0;
}