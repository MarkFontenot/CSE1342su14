/*************************************
 * Program #3 - Tic Tac Toe
 * by: John Q. Programmer
 * June 11, 2014
 *
 * This is a basic tic-tac-toe game that I
 * am working on for fun. It needs to be understandable by all of my friends
 * and my little brother and sister.  They should want to play it
 * incessantly!
 *
 **************************************/

#include <iostream>
using namespace std;

//set up sizeConstants
const int GAMEBOARDSIZE = 9;
const int MAXNAMELENGTH = 25;

void getPlayerNames(char[], char[]);
void playGame(int[], char[], char[]);
void printGameBoard(int[]);

int main()
{
    //**************************************
    //Set up data structures
    //**************************************

    //Modelling 2D tic-tac-toe game board with
    //a 1D array using row-major ordering.  So, first
    //box of 2nd row on a tic-tac-toe board
    //would be the gameBoard[3], the 4th element of
    //the array.
    int gameBoard[GAMEBOARDSIZE] = {0};
    char namePlayer1[MAXNAMELENGTH];
    char namePlayer2[MAXNAMELENGTH];

    getPlayerNames(namePlayer1, namePlayer2);
    playGame(gameBoard, namePlayer1, namePlayer2);


    return 0;
}

/**
 * getPlayerNames will ask the users to enter their names
 * so that prompts are more meaningful in the rest of the game
 */
void getPlayerNames(char name1[], char name2[])
{
    cout << "Player 1, Please enter your first name (no spaces): ";
    cin >> name1;
    cout << "Player 2, Please enter your first name (no spaces): ";
    cin >> name2;
}

/**
 * This is the main game loop, but its not looping yet.  Got to figure out
 * how to get all the steps working together.
 */
void playGame(int board[], char name1[], char name2[])
{
    int currentPlayer = 1;

    //Have got to figure out how to make this loop so that it goes from
    //plaer to player.

    //print game board before asking players to enter choose a block
    printGameBoard(board);

    int row = 0;
    int col = 0;
    cout << name1 << ", enter row and column separated by a space: ";
    cin >> row >> col;

    if(currentPlayer == 1)
    {
        //need to figure out how to find location in
        //board based on row and col entered by the user

        //placeholder code for now
        board[0] = 1;

        //switch to next player
        currentPlayer = 2;
    }
    else if (currentPlayer == 2)
    {
        //need to figure out how to fine location in
        //board based on row and col entered by the user

        //placeholder code for now
        board[0] = 2;

        //switch to next player
        currentPlayer = 1;
    }

    //Need to check for a win after each play.  Need to add a function for that.
}

/**
 * printGameBoard should print a familiar-looking tic-tac-toe gameboard to the terminal.
 * Should I print column and row numbers?
 */
void printGameBoard(int board[])
{
    //just printing as 1D for now, but have to figure
    //out how to print as 2D
    //oh - and how to get Xs and Os to print instead of ints
    for(int i = 0; i < GAMEBOARDSIZE; i++)
        cout << board[i] << " ";
    cout << endl;
}



































