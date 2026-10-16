#include <iostream>

using std::cout;

void printBoard(int board[6][7])
{
    for (int row = 0; row < 6; row++)
    {
        for (int column = 0; column < 7; column++)
        {
            cout << board[row][column] << " ";
        }

        cout << "\n";
    }
}

bool dropPiece(int board[6][7], int column, int currentPlayer)
{
    if (column < 0 || column > 6)
    {
        return false;
    }

    for (int row = 5; row >= 0; row--)
    {
        if (board[row][column] == 0)
        {
            board[row][column] = currentPlayer;
            return true;
        }
    }

    return false;
}

int main()
{
    int board[6][7] = {};
    int currentPlayer = 1;

    cout << "State 1:\n";
    printBoard(board);
    cout << "Current Player: " << currentPlayer << "\n\n";

    if (dropPiece(board, 3, currentPlayer))
    {
        if (currentPlayer == 1)
        {
            currentPlayer = 2;
        }
        else
        {
            currentPlayer = 1;
        }
    }

    cout << "State 2:\n";
    printBoard(board);
    cout << "Current Player: " << currentPlayer << "\n\n";

    if (dropPiece(board, 3, currentPlayer))
    {
        if (currentPlayer == 1)
        {
            currentPlayer = 2;
        }
        else
        {
            currentPlayer = 1;
        }
    }

    cout << "State 3:\n";
    printBoard(board);
    cout << "Current Player: " << currentPlayer << "\n";

    return 0;
}