#include <iostream>
#include <cmath>

int main()
{
    using std::cin;
    using std::cout;

    srand(time(NULL));

    int random_num1 = (rand() % 6) + 1;
    
    switch (random_num1)
    {
    case 1:
        cout << "get 1";
        break;
    case 2:
        cout << "get 2";
        break;
    case 3:
        cout << "get 3";
        break;
    case 4:
        cout << "get 4";
        break;
    case 5:
        cout << "get 5";
        break;
    case 6:
        cout << "get 6";
        break;
    }


    return 0;
}