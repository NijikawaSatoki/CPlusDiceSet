/* =============================================================================
 * NijiDice class
 * =============================================================================
 * 
 * Author: Niji System - Satoki Nijikawa / ì¯êÏãΩãS
 *                       Wamo            / ÉèÅ[ÉÇ
 * 
 */

/* -----------------------------------------------------------------------------
 * Preprocessor stuffs
 * -----------------------------------------------------------------------------
 */

// Header libraries
#include <iostream>
#include <cstdlib>

// User defined headers
#include "../header/NijiDice.h"

/* Roll a four sided die
   Function author: Wamo (Niji System) */
int rollD4() {
    int roll;
    roll = (rand() % 4) + 1;
    return roll;
}

/* Roll a six sided die
   Function author: Wamo (Niji System) */
int rollD6() {
    int roll;
    roll = (rand() % 6) + 1;
    return roll;
}

/* Roll an eight sided die
   Function author: Wamo (Niji System) */
int rollD8() {
    int roll;
    roll = (rand() % 8) + 1;
    return roll;
}

/* Roll a twelve sided die
   Function author: Wamo (Niji System) */
int rollD12() {
    int roll;
    roll = (rand() % 12) + 1;
    return roll;
}

/* Roll a twenty sided die
   Function author: Wamo (Niji System) */
int rollD20() {
    int roll;
    roll = (rand() % 20) + 1;
    return roll;
}
