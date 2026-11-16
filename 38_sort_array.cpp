#include <iostream>
using std::cout;
using std::cin;

void sortArrays(unsigned int arrays[], int size){
    int temp;
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if(arrays[j] > arrays[j+1]){
                temp = arrays[j];
                arrays[j] = arrays[j + 1];
                arrays[j + 1] = temp;
            }
        }
    }
}


int main(){
    unsigned int arrays[] = {2, 5, 3, 1, 6, 4};
    int size = sizeof(arrays) / sizeof(int);

    cout << "before: ";
    for(int element : arrays){
        cout << element << " ";
    }

    sortArrays(arrays, size);

    cout << '\n' << "after: ";
    for (int element : arrays){
        cout << element << " ";
    }
}