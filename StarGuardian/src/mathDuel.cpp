#include <iostream>
#include <cstdlib>
#include <ctime>
#include "mathDuel.h"
#include <chrono>
#include <windows.h>
#include "Utils.h"

using namespace std; 

bool MathDuel()
{
    int correctAnswers = 0;
    
    setColor(12); // Blue
cout << "╔══════════════════════════════════════════════════════════════╗" << endl;
setColor(9); // Yellow (ASCII)
cout << R"(
 ____    ____         _   __       ______                    __   
|_   \  /   _|       / |_[  |     |_   _ `.                 [  |  
  |   \/   |   ,--. `| |-'| |--.    | | `. \ __   _   .---.  | |  
  | |\  /| |  `'_\ : | |  | .-. |   | |  | |[  | | | / /__\\ | |  
 _| |_\/_| |_ // | |,| |, | | | |  _| |_.' / | \_/ |,| \__., | |  
|_____||_____|\'-;__/\__/[___]|__]|______.'  '.__.'_/ '.__.'[___] 
)" << endl;
setColor(12); // Blue
cout << "╚══════════════════════════════════════════════════════════════╝" << endl;
setColor(7); // Reset
   
    cout<<"You have to solve the following mathematical exercises, also you have 5 seconds..."<<endl;
    cout << "Solve at least 3 out of 5 to win!" << endl;

    for(int i = 1; i <= 5; i++)
    {
         int num1 = rand() % 10 + 1;
         int num2 = rand() % 10 + 1; 
         
         int operation = rand() % 3;

         int result;
         char symbol;

         switch (operation) {
            case 0:
                result = num1 + num2;
                symbol = '+';
                break;
            case 1:
                result = num1 - num2;
                symbol = '-';
                break;
            case 2:
                result = num1 * num2;
                symbol = '*';
                break;
        }

        cout << "Question " << i << ": " << num1 << " " << symbol << " " << num2 << " = ";
        int answer;

        auto start = chrono::steady_clock::now();
        cin >> answer;
        auto end = chrono::steady_clock::now();

        chrono::duration<double> elapsed = end - start;
