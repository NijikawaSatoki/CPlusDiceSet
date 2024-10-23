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

// Establishes the usage of `std' namespace
using namespace std;

/* -----------------------------------------------------------------------------
 * User-defined functions
 * -----------------------------------------------------------------------------
 */

int rollD4() {
    int roll;
    roll = ( rand() % 4 ) + 1;
    return roll;
}

int rollD6() {
    int roll;
    roll = ( rand() % 6 ) + 1;
    return roll;
}

int rollD8() {
    int roll;
    roll = ( rand() % 8 ) + 1;
    return roll;
}

int rollD12() {
    int roll;
    roll = ( rand() % 12 ) + 1;
    return roll;
}

int rollD20() {
    int roll;
    roll = ( rand() % 20 ) + 1;
    return roll;
}

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
    // Seed initialisation
    srand(time(NULL));
    cout << DOUBLE_TAB << DOUBLE_QUOTE << "C++ Dice Set" << DOUBLE_QUOTE << endl; // Title
    cout << SINGLE_TAB << "By Niji System" << BLANK_LINE; // Author(s)
    do {
        // Ask the user which dice they want to roll
        cout << "Which dice would you like to roll?" << endl;
        cout << "Available are:" << NEW_LINE << "d4" << SINGLE_TAB << "d6" << SINGLE_TAB << "d8" << SINGLE_TAB << "d12" << NEW_LINE << "d20" << endl;
        cin >> dice;
        if (dice == "d4") {
            // Roll the dice
            roll = rollD4();
            // Print the result
            cout << "Your 1" << dice << " roll resulted in " << roll << "." << endl;
        } else if (dice == "d6") {
            // Roll the dice
            roll = rollD6();
            // Print the result
            cout << "Your 1" << dice << " roll resulted in " << roll << "." << endl;
        } else if (dice == "d8") {
            // Roll the dice
            roll = rollD8();
            // Print the result
            cout << "Your 1" << dice << " roll resulted in " << roll << "." << endl;
        } else if (dice == "d12") {
            // Roll the dice
            roll = rollD12();
            // Print the result
            cout << "Your 1" << dice << " roll resulted in " << roll << "." << endl;
        } else if (dice == "d20") {
            // Roll the dice
            roll = rollD20();
            // Print the result
            cout << "Your 1" << dice << " roll resulted in " << roll << "." << endl;
        } else if (dice != "d4" && dice != "d6" && dice != "d8" && dice != "d12" && dice != "d20") {
            cout << "What... What kind of dice is that?" << endl;
        }
        cout << "Would you like to roll again? [Y/n] ";
        cin >> confirm;
    } while (confirm == 'Y' || confirm == 'y');
    cout << "Have a nice day";
    cout << endl;
    return 0;
}
