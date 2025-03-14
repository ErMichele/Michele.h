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

struct Grandezza_Fisica {
    float Valore;
    float Incertezza;
};

struct Grandezza_Fisica Somma_Fisica (struct Grandezza_Fisica Grandezza_1, struct Grandezza_Fisica Grandezza_2) {
    struct Grandezza_Fisica Grandezza_Risultato;
    Grandezza_Risultato.Valore = Grandezza_1.Valore + Grandezza_2.Valore;
    Grandezza_Risultato.Incertezza = Grandezza_1.Incertezza + Grandezza_2.Incertezza;
    return Grandezza_Risultato;
}

struct Grandezza_Fisica Differenza_Fisica (struct Grandezza_Fisica Grandezza_1, struct Grandezza_Fisica Grandezza_2) {
    struct Grandezza_Fisica Grandezza_Risultato;
    Grandezza_Risultato.Valore = Grandezza_1.Valore - Grandezza_2.Valore;
    Grandezza_Risultato.Incertezza = Grandezza_1.Incertezza - Grandezza_2.Incertezza;
    return Grandezza_Risultato;
}

void UniformaString(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = (char)tolower((unsigned char)str[i]);
    }
}

double RadiceQuadrata(double Numero) { 
    double Corrente = Numero; 
    double Next; 
    double Delta = 1; 
     
    while (Delta > 1E-6) { 
        Next =  - (Corrente * Corrente - Numero) / (2 * Corrente); 
        Delta = Corrente - Next; 
        if (Delta < 0) Delta = -Delta; 
        Corrente = Next; 
    } 
     
    return Next; 
} 

#endif
