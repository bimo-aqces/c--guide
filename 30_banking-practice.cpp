#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::string;

double balance = 0;
unsigned int choice;

void showBalance() {
    cout << "\nbalance: " << balance;
};
double doWithdraw(double balance) {
    double amount;

    cout << "\nenter amount: ";
    cin >> amount;
    if(amount > balance){
        cout << "\nur too broke";
        return 0;
    }
    else if(amount < 0){
        cout << "\ncant negative";
        return 0;
    }
    cout << "\nu withdraw: " << amount;
    return amount;
};

double doDeposit(double balance) {
    double amount;

    cout << "enter amount: ";
    cin >> amount;

    if(amount < 0){
        cout << "\ncant negative";
        return 0;
    }

    cout << "\nu deposit: " << amount;
    return (amount);
};

int main(){
    do{
        cout << "\npick an option";
        cout << "\n(1) Show Balance";
        cout << "\n(2) Withdraw";
        cout << "\n(3) Deposit";
        cout << "\n(4) Exit";
        cout << "\noption: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            showBalance();
            break;
        case 2:
            balance -= doWithdraw(balance);
            break;
        case 3:
            balance += doDeposit(balance);
            break;
        case 4:
            cout << "\nexit confirmed";
            break;
        default:
            cout << "\ninvalid choice";
            break;
        }
    } while (choice != 4);

    cout << "\nsee ya";
    return 0;
}

