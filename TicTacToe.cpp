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
                cout <<setw(2)<<"🟩";
            }
            else if (board[i][j] == 1)
            {
                cout <<setw(2)<<"✅";
            }
            else if (board[i][j] == 2)
            {
                cout <<setw(2)<<"❎";
            }
            else
            {
                cout <<setw(2)<<"🟥";
            }
        }
        cout << endl;
    }
}
int main()
{
    int board[3][3];
    CreateBoard(board);
    DisplayBoard(board);

    return 0;
}