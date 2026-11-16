#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::string;

int searchArray(string array[], int size, string element){
    for (int i = 0; i < size; i ++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}

int main()
{
    string members[] = {"amba", "fuad", "rusdi", "azril", "farhan"};
    int size = sizeof(members) / sizeof(string);
    string element;

    bool retry = false;
    do{
        cout << "\nsearch member: ";
        cin >> element;
        int index = searchArray(members, size, element);

        cout << '\n' << element << " ada di index: " << index;

        cout << "\nretry (0/1): ";
        cin >> retry;
    } while (retry);


    return 0;
}