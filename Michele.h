#ifndef MICHELE_H
#define MICHELE_H

#include <stdio.h>
#include <ctype.h>

// =====================================================================================
// Console Text Formatting Macros
// =====================================================================================

#define RESET "\033[0m"

// Text color codes
#define ROSSO "\033[31m"
#define VERDE "\033[32m"
#define GIALLO "\033[33m"
#define BLU "\033[34m"
#define CIANO "\033[36m"

// Background color codes
#define S_ROSSO "\033[41m"
#define S_VERDE "\033[42m"
#define S_GIALLO "\033[43m"
#define S_BLU "\033[44m"

// Text formatting codes 
#define GRASSETTO "\033[1m"
#define SOTTOLINEATO "\033[4m"
#define LAMPEGGIANTE "\033[5m"
#define INVERSIONE "\033[7m"

// =====================================================================================
// Struct Definitions
// =====================================================================================

/**
 * @brief Structure to represent physical quantities with value and uncertainty
 */
struct Grandezza_Fisica {
    float Valore;      /** Value of the physical quantity */
    float Incertezza;  /** Uncertainty associated with the physical quantity */
};

/**
 * @brief Structure to represent the solutions of a quadratic equation.
 */
struct Soluzioni_Quadratica {
    double Soluzione_Più; /** Positive solution (root) of the quadratic equation. */
    double Soluzione_Meno;  /** Negative solution (root) of the quadratic equation. */
};

// =====================================================================================
// Mathematical Operations on Physical Quantities
// =====================================================================================

/**
 * @brief Adds two physical quantities, considering their uncertainties.
 * 
 * @param Grandezza_1 First physical quantity
 * @param Grandezza_2 Second physical quantity
 * @return struct Grandezza_Fisica Resulting physical quantity from the sum
 */
struct Grandezza_Fisica Somma_Fisica(struct Grandezza_Fisica Grandezza_1, struct Grandezza_Fisica Grandezza_2) {
    struct Grandezza_Fisica Grandezza_Risultato;
    Grandezza_Risultato.Valore = Grandezza_1.Valore + Grandezza_2.Valore;
    Grandezza_Risultato.Incertezza = Grandezza_1.Incertezza + Grandezza_2.Incertezza;
    return Grandezza_Risultato;
}

/**
 * @brief Subtracts two physical quantities, considering their uncertainties.
 * 
 * @param Grandezza_1 First physical quantity
 * @param Grandezza_2 Second physical quantity
 * @return struct Grandezza_Fisica Resulting physical quantity from the subtraction
 */
struct Grandezza_Fisica Differenza_Fisica(struct Grandezza_Fisica Grandezza_1, struct Grandezza_Fisica Grandezza_2) {
    struct Grandezza_Fisica Grandezza_Risultato;
    Grandezza_Risultato.Valore = Grandezza_1.Valore - Grandezza_2.Valore;
    Grandezza_Risultato.Incertezza = Grandezza_1.Incertezza + Grandezza_2.Incertezza;
    return Grandezza_Risultato;
}

/**
 * @brief Multiplies two physical quantities, considering their uncertainties.
 * 
 * @param Grandezza_1 First physical quantity
 * @param Grandezza_2 Second physical quantity
 * @return struct Grandezza_Fisica Resulting physical quantity from the multiplication
 */
struct Grandezza_Fisica Prodotto_Fisica(struct Grandezza_Fisica Grandezza_1, struct Grandezza_Fisica Grandezza_2) {
    struct Grandezza_Fisica Grandezza_Risultato;
    Grandezza_Risultato.Valore = Grandezza_1.Valore * Grandezza_2.Valore;
    Grandezza_Risultato.Incertezza = Grandezza_Risultato.Valore * ((Grandezza_1.Incertezza / Grandezza_1.Valore) + (Grandezza_2.Incertezza / Grandezza_2.Valore));
    return Grandezza_Risultato;
}

/**
 * @brief Divides two physical quantities, considering their uncertainties.
 * 
 * @param Grandezza_1 First physical quantity
 * @param Grandezza_2 Second physical quantity
 * @return struct Grandezza_Fisica Resulting physical quantity from the division
 */
struct Grandezza_Fisica Divisione_Fisica(struct Grandezza_Fisica Grandezza_1, struct Grandezza_Fisica Grandezza_2) {
    struct Grandezza_Fisica Grandezza_Risultato;
    Grandezza_Risultato.Valore = Grandezza_1.Valore / Grandezza_2.Valore;
    Grandezza_Risultato.Incertezza = Grandezza_Risultato.Valore * ((Grandezza_1.Incertezza / Grandezza_1.Valore) + (Grandezza_2.Incertezza / Grandezza_2.Valore));
    return Grandezza_Risultato;
}

/**
 * @brief Raises a physical quantity to a specified power, taking uncertainties into account.
 * 
 * @param Grandezza The physical quantity to be raised.
 * @param Esponente The exponent to which the quantity is raised.
 * @return struct Grandezza_Fisica The resulting physical quantity after applying the power.
 */
struct Grandezza_Fisica Potenza_Fisica(struct Grandezza_Fisica Grandezza, int Esponente) {
    struct Grandezza_Fisica Grandezza_Risultato = Grandezza;
    if (Esponente > 0) {
        for (int i = 1; i < Esponente; i++) {
            Grandezza_Risultato.Valore *= Grandezza.Valore;
            Grandezza_Risultato.Incertezza = Grandezza_Risultato.Valore * ((Grandezza.Incertezza / Grandezza.Valore) + (Grandezza.Incertezza / Grandezza.Valore));
        }
    } else if (Esponente == 0) {
        Grandezza_Risultato.Valore = 1;
        Grandezza_Risultato.Incertezza = 0;
    }
    return Grandezza_Risultato;
}

// =====================================================================================
// Advanced Mathematical Operations
// =====================================================================================

/**
 * @brief Calculates the square root of a number using Newton's method.
 * 
 * @param Numero The number to calculate the square root of
 * @return double The square root of the number
 */
double RadiceQuadrata(double Numero) {
    if (Numero < 0) {
        printf("Errore: numero negativo per radice quadrata (input: %f)!\n", Numero);
        return -1;
    }

    double Corrente = Numero;
    double Next;
    double Delta = 1;

    while (Delta > 1E-6) { 
        Next = Corrente - (Corrente * Corrente - Numero) / (2 * Corrente);
        Delta = Corrente - Next;
        if (Delta < 0) Delta = -Delta;
        Corrente = Next;
    }

    return Next;
}

/**
 * @brief Solves a quadratic equation of the form Ax^2 + Bx + C = 0.
 * 
 * @param A The quadratic coefficient (must be non-zero).
 * @param B The linear coefficient.
 * @param C The constant term.
 * @return struct Soluzioni A structure containing the two solutions
 */
struct Soluzioni_Quadratica Formula_Quadratica (double A, double B, double C) {
    struct Soluzioni_Quadratica Risultati;
    double Discriminante = (B * B) - (4 * A * C);

    if (Discriminante > 0) {
        Risultati.Soluzione_Più = (-B + RadiceQuadrata(Discriminante)) / (2 * A);
        Risultati.Soluzione_Meno = (-B - RadiceQuadrata(Discriminante)) / (2 * A);
    } else if (Discriminante == 0) {
        Risultati.Soluzione_Più = Risultati.Soluzione_Meno = -B / (2 * A);
    } else {
        printf("Errore: discriminante negativo per numeri (A = %lf, B = %lf, C = %lf)!\n", A, B, C);
        Risultati.Soluzione_Più = Risultati.Soluzione_Meno = -1.0;
    }

    return Risultati;
}

/**
 * @brief Calculates the n-th Fibonacci number.
 * 
 * @param n The position of the Fibonacci number to calculate.
 * @return int The Fibonacci number at position n.
 */
int Fibonacci_Numero(int n) {
    if (n <= 0) {
        printf("Errore: n deve essere un numero positivo.\n");
        return -1;
    }
    if (n == 1) return 0;
    if (n == 2) return 1;

    int Valore_1 = 0, Valore_2 = 1, Risultato = 0;

    for (int i = 3; i <= n; i++) {
        Risultato = Valore_1 + Valore_2;
        Valore_1 = Valore_2;
        Valore_2 = Risultato;
    }

    return Risultato;
}

// =====================================================================================
// Utility Functions
// =====================================================================================

/**
 * @brief Converts a string to lowercase for comparison purposes.
 * 
 * @param str String to convert
 */
void UniformaString(char *str) {
    if (str == NULL || str[0] == '\0') return;
    for (int i = 0; str[i]; i++) {
        str[i] = (char)tolower((unsigned char)str[i]);
    }
}

#endif