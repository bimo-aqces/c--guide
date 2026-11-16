#include <iostream>
using std::cin;
using std::cout;
using std::string;

class Member{
    private:
        int kepunyaan = 0;
    
    public:
        Member(int kepunyaan){
            if(kepunyaan < 0){
                this->kepunyaan = 0;
            }
            else if(kepunyaan > 20){
                this->kepunyaan = 20;
            }
            else{
                setKepunyaan(kepunyaan);
            }
        }

        int getKepunyaan(){
            return kepunyaan;
        }

        void setKepunyaan(int kepunyaan){
            this->kepunyaan = kepunyaan;
        }

    
};

int main(){
    Member amba(16);
    cout << amba.getKepunyaan() << '\n';
}