#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main()
{
    string question[] = {"1. Who is Bangboo's founder?",
                        "2. Who is currently leaves Yunkui Summit",
                        "3. What is price for Tailless's power?"};

    string multiple_choice[][3] = {{"A. Phaethon", "B. Joyous", "C. Sunbringer"},
                                {"A. Ju Fufu", "B. Pan Yinhu", "C. Ye Shiyuan"},
                                {"A. Hamburger", "B. Sacrifice", "C. Videotape"}};

    char answer_key[] = {'C', 'C', 'B'};
    char choice;
    int score = 0;

    int size = sizeof(question) / sizeof(question[0]);
    for (int i = 0; i < size; i++){
        cout << question[i] <<'\n';

        for (int j = 0; j < sizeof(multiple_choice[0]) / sizeof(multiple_choice[0][0]); j++){
            cout << multiple_choice[i][j] << '\n';
        }

        cin >> choice;
        choice = toupper(choice);
        if (choice == answer_key[i]){
            cout << "correct";
            score++;
        }
        else{
            cout << "wrong";
        }

        cout << '\n';
    }

    cout << "score: " << (double(score) / double(sizeof(multiple_choice) / sizeof(multiple_choice[0]))) * 100 << '%';
}