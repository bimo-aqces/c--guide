#include <iostream>
using std::cin;
using std::cout;
using std::string;

struct jmk48
{
    string gender;
    int kepunyaan;
    bool kehitaman;
};


int main()
{
    jmk48 rusdi;
    jmk48 amba;
    jmk48 ironi;

    rusdi.gender = "male";
    rusdi.kehitaman = true;
    rusdi.kepunyaan = 12;

    amba.gender = "male";
    amba.kehitaman = true;
    amba.kepunyaan = 15;

    ironi.gender = "male";
    ironi.kehitaman = true;
    ironi.kepunyaan = 10;

    cout << rusdi.gender << '\n';
    cout << rusdi.kehitaman << '\n';
    cout << rusdi.kepunyaan << "\n\n";

    cout << amba.gender << '\n';
    cout << amba.kehitaman << '\n';
    cout << amba.kepunyaan << "\n\n";

    cout << ironi.gender << '\n';
    cout << ironi.kehitaman << '\n';
    cout << ironi.kepunyaan << "\n\n";
}