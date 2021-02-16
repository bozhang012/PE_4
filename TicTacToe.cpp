#include <iostream>
#include <iomanip>
using namespace std;
void CreateBoard(int board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = 0;
        }
    }
}
void DisplayBoard(int board[3][3])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == 0)
            {
                cout << setw(2) << "🟩";
            }
            else if (board[i][j] == 1)
            {
                cout << setw(2) << "✅";
            }
            else if (board[i][j] == 2)
            {
                cout << setw(2) << "❎";
            }
            else
            {
                cout << setw(2) << "🟥";
            }
        }
        cout << endl;
    }
}
void PlaceMarker(int &L, int play)
{
    L = play;
}
void GetPlayerChoice(int board[3][3], int play)
{
    cout << "***************play_"
            <<play
         << "***************" << endl;
    cout << "Choise row: ";
    int row;
    cin >> row;
    cout << "Choise col: ";
    int col;
    cin >> col;
    PlaceMarker(board[row - 1][col - 1], play);
}

int main()
{
    int board[3][3];
    CreateBoard(board);
    DisplayBoard(board);
    for (int i = 0; i < 9; i++)
    {
        GetPlayerChoice(board, 1+(i%2));
        DisplayBoard(board);
    }

    return 0;
}