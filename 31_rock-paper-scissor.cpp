#include <iostream>

using std::cin;
using std::cout;
using std::string;

char getPlayer()
{
    char player;
    cout << "\nenter R / P / S: ";
    cin >> player;

    return player;
}

char getCom()
{
    srand(time(NULL));
    int com = (rand() % 3 + 1);
    switch (com)
    {
    case 1:
        return 'R';
    case 2:
        return 'P';
    case 3:
        return 'S';
    default:
        return 'R';
    }
}

void showHand(char player, char com)
{
    cout << "\nplayer do " << player;
    cout << "\ncom do " << com;
}

void getWinner(char player, char com)
{
    if (player == 'R')
    {
        if (com == 'R')
        {
            cout << "\ntie";
        }
        if (com == 'P')
        {
            cout << "\ncom win";
        }
        if (com == 'S')
        {
            cout << "\nplayer win";
        }
    }
    if (player == 'P')
    {
        if (com == 'R')
        {
            cout << "\nplayer win";
        }
        if (com == 'P')
        {
            cout << "\ntie";
        }
        if (com == 'S')
        {
            cout << "\ncom win";
        }
    }
    if (player == 'S')
    {
        if (com == 'R')
        {
            cout << "\ncom win";
        }
        if (com == 'P')
        {
            cout << "\nplayer win";
        }
        if (com == 'S')
        {
            cout << "\ntie";
        }
    }
}

int main(){
    bool retry = false;
    do{
        char player = getPlayer();
        char com = getCom();
        showHand(player, com);
        getWinner(player, com);
        cout << "\nretry (1/0): ";
        cin >> retry;
    } while (retry);

    return 0;
}
