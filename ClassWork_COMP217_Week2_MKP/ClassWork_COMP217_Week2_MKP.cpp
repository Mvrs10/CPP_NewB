#include "ClassWork_COMP217_Week2_MKP.h"
#include <iostream>

using namespace std;

const int SIZE = 3;

// Template is declared below for MKP: 20-05-2025
template <typename T>
class TicTacToe {
private:
    T board[SIZE][SIZE];

public:
    TicTacToe() {
        // Initialize the board with empty spaces
        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                board[i][j] = ' ';
    }

    void displayBoard() {
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                cout << board[i][j];
                if (j < SIZE - 1) cout << " | ";
            }
            cout << endl;
            if (i < SIZE - 1) cout << "--+---+--" << endl;
        }
    }

    bool makeMove(int row, int col, T player) {
        if (row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == ' ') {
            board[row][col] = player;
            return true;
        }
        return false;
    }

    T checkWinner() {
        for (int i = 0; i < SIZE; i++) {
            if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
                return board[i][0];
            if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i])
                return board[0][i];
        }
        if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
            return board[0][0];
        if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
            return board[0][2];

        return ' ';
    }
};


int ClassWork_COMP217_Week2_MKP()
{
    TicTacToe<char> game;
    char currentPlayer = 'X';
    int row, col;
    int moves = 0;

    while (true) {
        game.displayBoard();
        cout << "Player " << currentPlayer << ", enter row and column (0-2): ";
        cin >> row >> col;

        if (game.makeMove(row, col, currentPlayer)) {
            moves++;
            char winner = game.checkWinner();
            if (winner != ' ') {
                game.displayBoard();
                cout << "Player " << winner << " wins!" << endl;
                break;
            }
            else if (moves == SIZE * SIZE) {
                game.displayBoard();
                cout << "It's a draw!" << endl;
                break;
            }
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
        else {
            cout << "Invalid move. Try again." << endl;
        }
    }

    return 0;

}