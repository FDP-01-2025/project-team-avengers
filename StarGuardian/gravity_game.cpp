#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include "gravity_game.h"
using namespace std;

void selectRandomMaze() {
    srand(time(0)); // Random seed
    int option = rand() % 3 + 1; // Random number between 1 and 3

    switch (option) {
        case 1: {
            char map1[maze_size][maze_size] = {
                {'>', 'v', '>', 'v', '>'},
                {'^', '>', 'v', '<', 'v'},
                {'^', '^', '>', 'v', '>'},
                {'v', '>', '^', '>', 'v'},
                {'^', '^', '>', '^', '>'}
            };
            memcpy(maze, map1, sizeof(map1));
            break;
        }
        case 2: {
            char map2[maze_size][maze_size] = {
                {'v', '>', '>', 'v', 'v'},
                {'v', '^', '<', '^', '>'},
                {'>', '>', 'v', '<', 'v'},
                {'^', '^', '>', 'v', '>'},
                {'^', '>', '^', '>', '>'}
            };
            memcpy(maze, map2, sizeof(map2));
            break;
        }
        case 3: {
            char map3[maze_size][maze_size] = {
                {'>', '>', 'v', '<', 'v'},
                {'v', '>', 'v', 'v', '>'},
                {'^', '^', '>', '>', 'v'},
                {'^', 'v', '<', 'v', '<'},
                {'^', '>', '<', '>', '>'}
            };
            memcpy(maze, map3, sizeof(map3));
            break;
        }
    }
}

void showMaze() {
    for (int i = 0; i < maze_size; ++i) {
        for (int j = 0; j < maze_size; ++j) {
            if (i == playerX && j == playerY)
                cout << 'G' << ' '; // G = Guardian
            else
                cout << maze[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << "\nWarnings: " << warnings << "/" << MAX_WARNINGS << "\n";
}

bool isValidMove(int dx, int dy) {
    int newX = playerX + dx;
    int newY = playerY + dy;

    if (newX < 0 || newX >= maze_size || newY < 0 || newY >= maze_size)
        return false;

    char gravity = maze[playerX][playerY];

    switch (gravity) {
        case '^': return dx == -1 && dy == 0;
        case 'v': return dx == 1 && dy == 0;
        case '<': return dx == 0 && dy == -1;
        case '>': return dx == 0 && dy == 1;
        default: return false;
    }
}

void movePlayer(int dx, int dy) {
    if (isValidMove(dx, dy)) {
        playerX += dx;
        playerY += dy;
        cout << "You moved correctly...\n";
    } else {
        cout << "Invalid move. You're sent back to the start.\n";
        playerX = 0;
        playerY = 0;
        warnings++;
    }
}
