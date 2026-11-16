#include <iostream>
#include <cmath>

int main()
{
    using std::cin;
    using std::cout;
    int row = 4;
    int col = 5;
    char symb = '#';

    for (int i = 1; i <= row; i++){
        for (int j = 1; j <= col; j++){
            cout << symb;
        }
        cout << '\n';
    }

        return 0;
}