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
#include <string>
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
    const string NEW_LINE = "\n";
    const string BLANK_LINE = "\n\n";
    const string SINGLE_TAB = "\t";
    const string DOUBLE_TAB = "\t\t";
    const string DOUBLE_QUOTE = "\"";
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
        cout << "Available are:" << NEW_LINE << "d4" << SINGLE_TAB << "d6" << SINGLE_TAB << "d8" << SINGLE_TAB << "d12" << NEW_LINE << "d20" << endl;
        cout << "`exit' closes out the program." << endl;
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
