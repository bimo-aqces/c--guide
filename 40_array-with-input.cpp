#include <iostream>
using std::cin;
using std::cout;
using std::getline;
using std::string;

int main(){
    string members[5];
    int size = sizeof(members) / sizeof(members[0]);
    string temp;

    for (int i = 0; i < size; i++){
        cout << "q to quit or enter member jmk48 #" << i+1 << ": ";
        getline(cin, temp);
        
        if (temp == "q"){
            break;
        }

        members[i] = temp;
    }

    for (int i = 0; !members[i].empty(); i++){
        cout << members[i] << '\n';
    }
}