#include <iostream>
#include <cmath>

int main()
{
    using std::cin;
    using std::cout;

    srand(time(NULL));

    int random_num1 = (rand() % 6) + 1;
    cout << random_num1 << '\n';

    int tried = 0;
    int guess;

    do{
        cout << "\nguess (1-6): ";
        cin >> guess;
        tried++;
        if(guess < random_num1){
            cout << "\nhigher";
        }
        else if (guess > random_num1){
            cout << "\nlower";
        }
        else{
            cout << "\nwin with tries: " << tried;
        }
    }while (guess != random_num1);

    return 0;
}