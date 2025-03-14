#ifndef MICHELE_H
#define MICHELE_H

#include <windows.h>
#include <stdio.h>

#define RESET "\033[0m"

//COLORI TESTO
#define ROSSO "\033[31m"
#define VERDE "\033[32m"
#define GIALLO "\033[33m"
#define BLU "\033[34m"
#define CIANO "\033[36m"

//SFONDI
#define S_ROSSO "\033[41m"
#define S_VERDE "\033[42m"
#define S_GIALLO "\033[43m"
#define S_BLU "\033[44m"

//TESTO
#define GRASSETTO "\033[1m"
#define SOTTOLINEATO "\033[4m"
#define LAMPEGGIANTE "\033[5m"
#define INVERSIONE "\033[7m"

void UniformaString(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = (char)tolower((unsigned char)str[i]);
    }
}

double squareRoot(double y) { 
    double current = y; 
    double next; 
    double delta = 1; 
     
    while (delta > 1E-6) { 
        next = current - (current * current - y) / (2 * current); 
        delta = current - next; 
        if (delta < 0) delta = -delta; 
        current = next; 
    } 
     
    return next; 
} 

#endif
