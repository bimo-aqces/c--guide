#include <iostream>
using std::cin;
using std::cout;
using std::string;

class Member
{
public:
    string name;
    int kepunyaan;
    bool kehitaman;

    Member(string name, int kepunyaan)
    {
        this->name = name;
        this->kepunyaan = kepunyaan;
    };

    Member(string name, int kepunyaan, bool kehitaman)
    {
        this->name = name;
        this->kepunyaan = kepunyaan;
        this->kehitaman = kehitaman;
    };

};

int main()
{
    Member member1("rusdi", 13);
    Member member2("amba", 15, true);

    cout << member1.name << '\n';
    cout << member1.kepunyaan << '\n';

    cout << member2.name << '\n';
    cout << member2.kepunyaan << '\n';
    cout << member2.kehitaman << '\n';
}