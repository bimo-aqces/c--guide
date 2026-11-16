#include <iostream>
#include <cmath>
using std::cin;
using std::cout;

class AllShape{
    public:
        double area;
        double volume;
};

class Cube : public AllShape{
    public:
        double side;

    Cube(double side){
        this->side = side;

        this->area = pow(side, 2) * 6;
        this->volume = pow(side, 3);
    };
};

class Cylinder : public AllShape
{
public:
    double radius;
    double height;

    Cylinder(double radius, double height)
    {
        this->radius = radius;
        this->height = height;

        this->area = 2*M_PI*radius*(radius + height);
        this->volume = M_PI * pow(radius, 2) * height;
    };
};

int main(){
    Cube cube1(5);
    Cube cube2(1);
    Cylinder cylinder1(3, 2);
    Cylinder cylinder2(2, 3);

    cout << cube1.area << '\n';
    cout << cube1.volume << "\n\n";

    cout << cube2.area << '\n';
    cout << cube2.volume << "\n\n";

    cout << cylinder1.area << '\n';
    cout << cylinder1.volume << "\n\n";

    cout << cylinder2.area << '\n';
    cout << cylinder2.volume << "\n\n";
}