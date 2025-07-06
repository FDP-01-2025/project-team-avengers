#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>
#include "galactic_escape.h"
using namespace std;

const int HEIGHT = 15;
const int LANES = 4;
const char PLAYER_CHAR = 'A';
const char OBSTACLE_CHAR = 'x';
const char EMPTY_CHAR = '.';
const int GOAL_SCORE = 100;


void show_start_screen()
{
    system("cls");
    cout << "================ GALACTIC ESCAPE ================\n";
    cout << "You are scaping in a spaceship. Your goal is reach " << GOAL_SCORE << " points to escape.\n";
    cout << "Evade obstacles (x) by moving between 3 ways.\n";
    cout << "Controls:\n";
    cout << "  <- y -> to move.\n";
    cout << "  E to start.\n";
    cout << "  Q to leave\n";
    cout << "==================================================\n";
    cout << "What do you want to do (E to escape, Q to leave)?: ";

    char option;
    do
    {
        option = toupper(_getch());
    } while (option != 'E' && option != 'Q');

    if (option == 'Q')
    {
        cout << "\nYou have decided not to escape... until next time.\n";
        exit(0);
    }
}

bool galactic_escape_play()
{
    show_start_screen();

    char map[HEIGHT][LANES];
    int playerLane = 1;
    int score = 0;
    bool gameOver = false;
    bool playerWon= false;

    srand(time(0));

    //Initialize empty map
    for (int i = 0; i < HEIGHT; i++){
        for (int j = 0; j < LANES; j++){
            map[i][j] = EMPTY_CHAR;
        }
    }
    while (!gameOver)
    {
        //Moving obstacles downward
        for (int i = HEIGHT - 1; i > 0; i--)
        {
            for (int j = 0; j < LANES; j++)
            {
                map[i][j] = map[i - 1][j];
            }
        }

        //Clean top row
        for (int j = 0; j < LANES; j++)
        {
            map[0][j] = EMPTY_CHAR;
        }

        //Add random obstacle in top row
        if (rand() % 2 == 0)
        {
            int obsLane = rand() % LANES;
            map[0][obsLane] = OBSTACLE_CHAR;
        }

        //Draw screen 
        system("cls");
        for (int i = 0; i < HEIGHT; i++)
        {
            for (int j = 0; j < LANES; j++)
            {
                if (i == HEIGHT - 1 && j == playerLane)
                {
                    cout << PLAYER_CHAR << " ";
                }
                else
                {
                    cout << map[i][j] << " ";
                }
            }
            cout << endl;
        }
        cout << "Score: " << score << "/" << GOAL_SCORE << endl;

        //Verify collision
        if (map[HEIGHT - 1][playerLane] == OBSTACLE_CHAR)
        {
            gameOver = true;
            cout << "\n Crash! GAME OVER. \n";
            playerWon = false;
        }

        //Check if you reached the goal
        if (score >= GOAL_SCORE)
        {
            gameOver = true;
            cout << "\n You did it - you made your great escape! \n";
            playerWon = true;
        }

        //Read input (with keys A and D)
        if (_kbhit())
        {
            char key = tolower(_getch()); //Convert to lowercase in case you use uppercase letters.
            if (key == 'a' && playerLane > 0)
            {
                playerLane--; //left
            }
            else if (key == 'd' && playerLane < LANES -1)
            {
                playerLane++; //right
            }
        }

        score++;
        Sleep(200);
    }

    cout << "\n See you Space Guardian. \n";

    cout << "Press any key to continue...";
    _getch();

    return playerWon;
}