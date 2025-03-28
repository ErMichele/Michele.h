/* Test of Utility Functions: UniformaString and Logging.
This test demonstrates the UniformaString function, which converts a string to lowercase, 
and the Logging utility, used to log messages with timestamps and types (some examples INFO, DEBUG, WARNING, ERROR). */


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