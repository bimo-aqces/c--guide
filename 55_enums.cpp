#include <iostream>
using std::cin;
using std::cout;
using std::string;

enum Day {Sunday = 0, Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6};

int main(){
    Day today = Thursday;
    switch(today){
        case Sunday:
            cout << "Sunday\n";
            break;
        case Monday:
            cout << "Monday\n";
            break;
        case Tuesday:
            cout << "Tuesday\n";
            break;
        case Wednesday:
            cout << "Wednesday\n";
            break;
        case Thursday:
            cout << "Thursday\n";
            break;
        case Friday:
            cout << "Friday\n";
            break;
        }
}