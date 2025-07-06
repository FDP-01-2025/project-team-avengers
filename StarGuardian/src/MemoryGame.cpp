#include <iostream>
#include "MemoryGame.h"
#include <vector>
#include <random>    // for random_device
#include <chrono>    // for seeding
#include <algorithm> // for shuffle
#include <windows.h>
#include "Utils.h"

using namespace std;

bool memoryGame() 
{
    setColor(14); // Blue
cout << "╔══════════════════════════════════════════════════════════════╗" << endl;
setColor(9); // Yellow (ASCII)
cout << R"(
 _      _____ _      ____  ____ ___  _   _____ ____  _      _____
/ \__/|/  __// \__/|/  _ \/  __\\  \//  /  __//  _ \/ \__/|/  __/
| |\/|||  \  | |\/||| / \||  \/| \  /   | |  _| / \|| |\/|||  \  
| |  |||  /_ | |  ||| \_/||    / / /    | |_//| |-||| |  |||  /_ 
\_/  \|\____\\_/  \|\____/\_/\_\/_/     \____\\_/ \|\_/  \|\____\
)" << endl;
setColor(14); // Blue
cout << "╚══════════════════════════════════════════════════════════════╝" << endl;
setColor(7); // Reset


}