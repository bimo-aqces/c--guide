#include <iostream>
#include <cmath>

int main()
{
    using std::cin;
    using std::cout;

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            break;
        }
        cout << "halo " << i << '\n';
    }

    cout << '\n';

    for (int i = 5; i >= 1; i--)
    {
        if(i==3){
            continue;
        }
        cout << "halo " << i << '\n';
    }

    return 0;
}