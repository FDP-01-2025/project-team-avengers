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