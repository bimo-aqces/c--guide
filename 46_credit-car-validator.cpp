#include <iostream>
using std::cin;
using std::cout;
using std::string;

int getDigit(int credit_number){
    return credit_number % 10 + (credit_number / 10 % 10);
}

int sumOdd(string credit_number){
    int result = 0;
    for (int i = credit_number.size() - 1; i>=0 ;i -= 2){
        result += credit_number[i] - '0';
    }
    return result;
}

int sumEven(string credit_number){
    int result = 0;
    for (int i = credit_number.size() - 2; i >= 0; i -= 2)
    {
        result += getDigit((credit_number[i] - '0')*2);
    }
    return result;
}



int main()
{
    string credit_number;
    int result;

    cout << "enter credit number: ";
    cin >> credit_number;

    result = sumEven(credit_number) + sumOdd(credit_number);
    if (result % 10 == 0){
        cout << "ok";
    }
    else{
        cout << "invalid";
    }
}