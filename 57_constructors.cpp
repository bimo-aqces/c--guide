#include <iostream>
using std::cin;
using std::cout;
using std::string;

class Member{
    public:
        string name;
        int kepunyaan;

        Member(string name, int kepunyaan){
            this->name = name;
            this->kepunyaan = kepunyaan;
        };

        void ngokang()
        {
            cout << name << " sepanjang " << kepunyaan << " sedang ngokang\n";
        }

        void santai()
        {
            cout << name << " sepanjang " << kepunyaan << " sedang santai\n";
        }
};

int main()
{
    Member member1("rusdi", 13);

    member1.ngokang();
    member1.santai();
}