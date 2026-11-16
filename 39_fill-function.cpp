#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main(){
    const int pasukan = 100;
    string members[pasukan];
    
    fill(members, members + (pasukan / 4), "jacobi");
    fill(members + (pasukan / 4), members + (pasukan / 4)*2, "amba");
    fill(members + (pasukan / 4) * 2, members + (pasukan / 4)*3, "ironi");
    fill(members + (pasukan / 4) * 3, members + pasukan, "rusdi");

    for(string member : members){
        cout << member << '\n';
    }
}