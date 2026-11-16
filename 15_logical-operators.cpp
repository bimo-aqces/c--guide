#include <iostream>
#include <cmath>

int main()
{
    using std::cin;
    using std::cout;

    bool plant;
    double ph_val;
    bool water;
    bool buy;

    cout << "\nhave plant? (1/0): ";
    cin >> plant;


    if(plant){
        cout << "\n enter pH: ";
        cin >> ph_val;
        if(ph_val < 7 || ph_val > 7){
            cout << "\nbad pH";
        }
        else{
            cout << "\ngood pH";
        }
    }
    else if(!plant){
        cout << "\nno plant";
        cout << "\nbuy? (1/0): ";
        cin >> buy;
        cout << "\nwater? (1/0): ";
        cin >> water;
        if(buy && water){
            cout << "\nplant ok";
        }
        else{
            cout << "\nbad plant";
        }
    }

    return 0;
}