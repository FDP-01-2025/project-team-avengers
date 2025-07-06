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
