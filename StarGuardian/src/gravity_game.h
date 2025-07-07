#pragma once

constexpr int maze_size = 5;
extern int playerX, playerY;
extern int warnings;
extern char maze[maze_size][maze_size];

void selectRandomMaze();
void showMaze();
bool gravityMaze();