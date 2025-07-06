#include <iostream>
#include "ReactionGame.h"
#include <cstdlib>  // for rand
#include <ctime>    // for time
#include <chrono>   // for timing
#include <windows.h>
#include "Utils.h"

using namespace std;

bool reactionGame() {
    system("cls"); // clear console
    setColor(9); // Blue
    cout << "╔══════════════════════════════════════════════════════════════╗" << endl;
    setColor(10);
    cout << R"(
 __________                      __  .__                  ________                       
\______   \ ____ _____    _____/  |_|__| ____   ____    /  _____/_____    _____   ____  
 |       _// __ \\__  \ _/ ___\   __\  |/  _ \ /    \  /   \  ___\__  \  /     \_/ __ \ 
 |    |   \  ___/ / __ \\  \___|  | |  (  <_> )   |  \ \    \_\  \/ __ \|  Y Y  \  ___/ 
 |____|_  /\___  >____  /\___  >__| |__|\____/|___|  /  \______  (____  /__|_|  /\___  >
        \/     \/     \/     \/                    \/          \/     \/      \/     \/ 
)" << endl;
    setColor(9); // Blue
    cout << "╚══════════════════════════════════════════════════════════════╝" << endl;
    setColor(7);    
}