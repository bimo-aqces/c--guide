#include <iostream>
#include <cmath>

int main()
{
    using std::cin;
    using std::cout;
    using std::string;

    string name;
    cout << "\nenter name: ";
    getline(cin, name);

    if(name.length() > 5){
        cout << "\nlong name";
    }
    else if(name.empty()){
        cout << "\nno name";
    }
    else{
        cout << "\nshort name";
    }

    cout << '\n' << name.append(" suka loli");
    cout << '\n' << name.at(1);
    cout << '\n' << name.insert(0, "ini ");
    cout << '\n' << name.find('m');
    cout << '\n' << name.erase(0, 3);
    return 0;
}