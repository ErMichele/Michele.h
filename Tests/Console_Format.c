/*
 * Test Program: Console Text Formatting Macros
 *
 * Description:
 * This test demonstrates the use of ANSI escape code macros from the Michele library
 * to customize the appearance of text in the terminal.
 *
 * Specifically, it prints the message "Hello, test!" using:
 *   - Blue text color
 *   - Green background
 *   - Bold formatting
 *
 * The RESET macro is used at the end to restore the default console style.
 */

#include "../Michele.h"

int main () {
    printf(BLU S_VERDE GRASSETTO "Hello, test!" RESET);
}