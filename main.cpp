/* =============================================================================
 * C++ Dice Set
 * =============================================================================
 * 
 * Author: Niji System - Wamo
 * 
 */

/* -----------------------------------------------------------------------------
 * Preprocessor stuffs
 * -----------------------------------------------------------------------------
 */

// Header libraries
#include <iostream>
#include <limits>
#include <cstdlib>
#include <ctime>

// User defined headers
#include "header/NijiDice.h"

// Establishes the usage of `std' namespace
using namespace std;

/* -----------------------------------------------------------------------------
 * Main code
 * -----------------------------------------------------------------------------
 */

int main() {
    // Constants
    const char NEWLINE[] = "\n";
    const char BLANK_LINE[] = "\n\n";
    const char SINGLE_TAB[] = "\t";
    const char DOUBLE_TAB[] = "\t\t";
    const char DOUBLE_QUOTE[] = "\"";
    // Variables
    // << Integers >>
    int roll = 0;
    // << Characters >>
    char confirm = ' ';
    // << Strings >>
    string dice = "";
    // Object initialisation
    // >> NijiDice <<
    NijiDice diceRoll;
    // Seed initialisation
    srand(time(NULL));
    cout << DOUBLE_TAB << DOUBLE_QUOTE << "C++ Dice Set" << DOUBLE_QUOTE << endl; // Title
    cout << SINGLE_TAB << "By Niji System" << BLANK_LINE; // Author(s)
    do {
        // Ask the user which dice they want to roll
        cout << "Which dice would you like to roll?" << endl;
        printf("Available are:%s d4 %s d6 %s d8 %s d12 %s d20", NEWLINE, SINGLE_TAB, SINGLE_TAB, SINGLE_TAB, NEWLINE);
        cout << endl;
        cout << "`exit' closes out the program." << endl;
        cout << "Please type out your selection and hit [RETURN]: ";
        cin >> dice;
        if (dice == "d4") {
            // Roll the dice
            roll = diceRoll.rollD4();
            // Print the result
            cout << "Your 1" << dice << " roll resulted in " << roll << "." << endl;
        } else if (dice == "d6") {
            // Roll the dice
            roll = diceRoll.rollD6();
            // Print the result
            cout << "Your 1" << dice << " roll resulted in " << roll << "." << endl;
        } else if (dice == "d8") {
            // Roll the dice
            roll = diceRoll.rollD8();
            // Print the result
            cout << "Your 1" << dice << " roll resulted in " << roll << "." << endl;
        } else if (dice == "d12") {
            // Roll the dice
            roll = diceRoll.rollD12();
            // Print the result
            cout << "Your 1" << dice << " roll resulted in " << roll << "." << endl;
        } else if (dice == "d20") {
            // Roll the dice
            roll = diceRoll.rollD20();
            // Print the result
            cout << "Your 1" << dice << " roll resulted in " << roll << "." << endl;
        } else if (dice == "exit") {
            cout << "I see. Well then..." << endl;
            break;
        } else if (dice != "d4" && dice != "d6" && dice != "d8" && dice != "d12" && dice != "d20" && dice != "exit") {
            cout << "What... What kind of dice is that?" << endl;
        }
        cout << "Would you like to roll again? [Y/n] ";
        cin >> confirm;
    } while (confirm == 'Y' || confirm == 'y');
    cout << "Have a nice day";
    cout << endl;
    return 0;
}

/* >>>>>> END OF FILE <<<<<< */
