#include <iostream>
#include <cstdlib>  // For rand()
#include <ctime>    // For time()
#include "MixLaboratory.h"
#include <windows.h>
#include "Utils.h"

using namespace std;

// Generates a random secret formula
void generateSecretFormula(int formula[]) {
    srand(time(0)); // Initialize random seed
    for (int i = 0; i < FORMULA_SIZE; ++i) {
        formula[i] = rand() % 5 + 1; // Ingredients between 1 and 5
    }
}

// Asks the player to enter their mix
void askPlayerMix(int mix[]) {
    cout << "\nEnter your mix of " << FORMULA_SIZE << " ingredients (from 1 to 5):\n";
    for (int i = 0; i < FORMULA_SIZE; ++i) {
        cout << "Ingredient " << i + 1 << ": ";
        cin >> mix[i];
    }
}