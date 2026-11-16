#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string dinosaurs[][3] = {{"triceratops", "tyrannosaurus", "stegosaurus"},
                            {"parasaurolophus", "pteranodon", "pterodactyl"},
                            {"brontosaurus", "brachiosaurus", "mosasaurus"}};

    int rows = sizeof(dinosaurs) / sizeof(dinosaurs[0]);
    int columns = sizeof(dinosaurs[0]) / sizeof(dinosaurs[0][0]);

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cout << dinosaurs[i][j] << ", ";
        }
        cout << '\n';
    }
}