/*
 * Test Program: Utility Functions (UniformaString & Logging)
 *
 * Description:
 * This test demonstrates two utility functions from the Michele library:
 *
 * 1. UniformaString:
 *    Converts a string to all lowercase characters.
 *
 * 2. Logging:
 *    Logs messages to the console and a log file with a timestamp and log level.
 *    Supported log types include: INFO, DEBUG, WARNING, and ERROR.
 *
 * This example shows how to track changes to a variable and generate
 * log messages of different types for debugging and monitoring.
 */

#include "../Michele.h"

int UserID = 0;
char Debbug[] = "TEST";
int main () {
    Logging("INFO", "Program started corretly.");
    Logging("DEBUG", "The Debbug variable before the fuction is %s.", Debbug);
    UniformaString(Debbug);
    Logging("DEBUG", "The Debbug variable after the fuction is %s.", Debbug);
    Logging("WARNING", "UserID is equal to %d, the program might bug.", UserID);
    Logging("ERROR", "The program will stop.");
}