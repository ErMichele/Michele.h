/* Test to validate the Console Text Formatting Macros functionality.
This code demonstrates the use of macros to customize console text appearance.
It prints "Hello, test!" to the terminal with the text color set to blue, 
a green background, and bold formatting applied for enhanced readability. */

#include "../Michele.h"

int main () {
    printf(BLU S_VERDE GRASSETTO "Hello, test!" RESET);
}