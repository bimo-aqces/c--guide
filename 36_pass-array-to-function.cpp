#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::string;

int getTotal(int score[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += score[i];
    }
    return total;
}

int main()
{
    int score[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(score) / sizeof(int);
    cout << "\ntotal is: " << getTotal(score, size);

    return 0;
}
