#include <iostream>
using std::cin;
using std::cout;
using std::string;

struct jmk48
{
    string gender;
    int kepunyaan;
};

void printMember(jmk48 &member){
    cout << member.gender << '\n';
    cout << member.kepunyaan << '\n';
}

void changeKepunyaan(jmk48 &member, int kepunyaan){
    member.kepunyaan = kepunyaan;
}

int main()
{
    jmk48 rusdi;
    jmk48 amba;

    rusdi.gender = "male";
    rusdi.kepunyaan = 20;

    printMember(rusdi);
    changeKepunyaan(rusdi, 100);
    printMember(rusdi);
}