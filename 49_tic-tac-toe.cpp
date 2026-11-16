#include <iostream>
using std::cin;
using std::cout;
using std::string;

void showBoard(char *spaces) {
    cout << "     |     |     " << '\n';
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  "<< '\n';
    cout << "_____|_____|_____" << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << '\n';
    cout << "_____|_____|_____" << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << '\n';
    cout << "     |     |     " << '\n';
};

void playerMove(char player, char *spaces)
{
    int choice;
    do{
        cout << "choose a spot (1-9): ";
        cin >> choice;
        choice--;
        if(spaces[choice] == ' '){
            spaces[choice] = player;
            break;
        }
        
    } while (choice <= 9 && choice >= 1);
}

void comMove(char com, char *spaces){
    srand(time(NULL));
    while(true){
        int choice = rand() % 9;
        if(spaces[choice] == ' '){
            spaces[choice] = com;
            break;
        }
    }
}

bool getWinner(char com, char player, char *spaces){
    if((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])){
        spaces[0] == player ? cout << "Win" : cout << "lose";
    }
    else if ((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5]))
    {
        spaces[3] == player ? cout << "Win" : cout << "lose";
    }
    else if ((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8]))
    {
        spaces[6] == player ? cout << "Win" : cout << "lose";
    }
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6]))
    {
        spaces[0] == player ? cout << "Win" : cout << "lose";
    }
    else if ((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7]))
    {
        spaces[1] == player ? cout << "Win" : cout << "lose";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8]))
    {
        spaces[2] == player ? cout << "Win" : cout << "lose";
    }
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8]))
    {
        spaces[0] == player ? cout << "Win" : cout << "lose";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6]))
    {
        spaces[2] == player ? cout << "Win" : cout << "lose";
    }
    else{
        return false;
    }
    return true;
}

bool checkTie(char *spaces){
    for (int i = 0; i <= 8; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    
    cout << "tie";
    return true;
}

int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char com = 'O';
    showBoard(spaces);

    while(true){
        playerMove(player, spaces);
        comMove(com, spaces);
        showBoard(spaces);

        if(getWinner(com, player, spaces)){
            break;
        }
        else if(checkTie(spaces)){
            break;
        }
    }

    cout << "thx";
}