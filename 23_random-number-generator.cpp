#include <iostream>
#include <cmath>

int main()
{
    using std::cin;
    using std::cout;

    srand(time(NULL));

    int random_num1 = (rand()%6) + 1;
    int random_num2 = (rand() % 6) + 1;
    int random_num3 = (rand() % 6) + 1;
    int random_num4 = (rand() % 6) + 1;
    int random_num5 = (rand() % 6) + 1;
    int random_num6 = (rand() % 6) + 1;

    cout << random_num1 << '\n';
    cout << random_num2 << '\n';
    cout << random_num3 << '\n';
    cout << random_num4 << '\n';
    cout << random_num5 << '\n';
    cout << random_num6 << '\n';

    return 0;
}