#include <iostream>

using namespace std;

const int SIZE = 3;

// Function to initialize the board using pointers
void initializeBoard(char **board) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            board[i][j] = ' ';
}

// Function to display the board
void displayBoard(char **board) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << board[i][j];
            if (j < SIZE - 1) cout << " | ";
        }
        cout << endl;
        if (i < SIZE - 1) cout << "--+---+--" << endl;
    }
}

// Function to check for a winner
char checkWinner(char **board) {
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

// Function to make a move
bool makeMove(char **board, int row, int col, char player) {
    if (row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == ' ') {
        board[row][col] = player;
        return true;
    }
    return false;
}

int main() {
    // Dynamically allocate memory for the board
    char **board = new char*[SIZE];
    for (int i = 0; i < SIZE; i++)
        board[i] = new char[SIZE];

    initializeBoard(board);
    
    char currentPlayer = 'X';
    int row, col;
    int moves = 0;

    while (true) {
        displayBoard(board);
        cout << "Player " << currentPlayer << ", enter row and column (0-2): ";
        cin >> row >> col;

        if (makeMove(board, row, col, currentPlayer)) {
            moves++;
            char winner = checkWinner(board);
            if (winner != ' ') {
                displayBoard(board);
                cout << "Player " << winner << " wins!" << endl;
                break;
            } else if (moves == SIZE * SIZE) {
                displayBoard(board);
                cout << "It's a draw!" << endl;
                break;
            }
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        } else {
            cout << "Invalid move. Try again." << endl;
        }
    }

    // Free allocated memory
    for (int i = 0; i < SIZE; i++)
        delete[] board[i];
    delete[] board;

    return 0;
}