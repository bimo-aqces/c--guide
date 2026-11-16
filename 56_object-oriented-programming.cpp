#include <iostream>
using std::cin;
using std::cout;
using std::string;

class Member{
    public:
        string name;
        int kepunyaan;

        void ngokang(){
            cout << name << " sepanjang "<< kepunyaan << " sedang ngokang\n";
        }

        void santai(){
            cout << name << " sepanjang " << kepunyaan << " sedang santai\n";
        }
};

int main()
{
    Member member1;
    member1.name = "rusdi";
    member1.kepunyaan = 14;

    member1.ngokang();
    member1.santai();
}