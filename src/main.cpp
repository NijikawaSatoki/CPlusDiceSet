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
 * Main code
 * -----------------------------------------------------------------------------
 */

int main() {
    // Constants
    const string NEW_LINE = "\n";
    const string SINGLE_TAB = "\t";
    // Variables
    // << Integers >>
    int roll = 0;
    // << Strings >>
    string dice = "";
    // Seed initialisation
    srand(time(NULL));
    // Ask the user which dice they want to roll
    cout << "Which dice would you like to roll?" << endl;
    cout << "Available are:" << NEW_LINE << "d4" << SINGLE_TAB << "d6" << SINGLE_TAB << "d8" << SINGLE_TAB << "d12" << NEW_LINE << "d20" << endl;
    cin >> dice;
    if (dice == "d4") {
        // Roll the dice
        roll = ( rand() % 4 ) + 1;
        // Print the result
        cout << "Your 1" << dice << " roll resulted in " << roll << "." << endl;
    } else if (dice == "d6") {
        // Roll the dice
        roll = ( rand() % 6 ) + 1;
        // Print the result
        cout << "Your 1" << dice << " roll resulted in " << roll << "." << endl;
    } else if (dice == "d8") {
        // Roll the dice
        roll = ( rand() % 8 ) + 1;
        // Print the result
        cout << "Your 1" << dice << " roll resulted in " << roll << "." << endl;
    } else if (dice == "d12") {
        // Roll the dice
        roll = ( rand() % 12 ) + 1;
        // Print the result
        cout << "Your 1" << dice << " roll resulted in " << roll << "." << endl;
    } else if (dice == "d20") {
        // Roll the dice
        roll = ( rand() % 20 ) + 1;
        // Print the result
        cout << "Your 1" << dice << " roll resulted in " << roll << "." << endl;
    } else if (dice != "d4" && dice != "d6" && dice != "d8" && dice != "d12" && dice != "d20") {
        cout << "What... What kind of dice is that?" << endl;
    }
    cout << "Have a nice day";
    cout << endl;
    return 0;
}
