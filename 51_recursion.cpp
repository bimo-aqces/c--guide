#include <iostream>
using std::cin;
using std::cout;
using std::string;

int factorial(int num){
    if(num > 1){
        return num * factorial(num - 1);
    }
    else{
        return 1;
    }
}

int main()
{
    cout << factorial(5);
}