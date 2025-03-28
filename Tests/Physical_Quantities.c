/* Test to verify the functionalities of mathematical operations on physical quantities.
The code creates two physical quantities with predefined values and uncertainties. 
It then performs various operations (sum, subtraction, multiplication, division, and power) 
and prints the resulting values and uncertainties in a readable format to the terminal. */

#include "../Michele.h"

int main () {
    struct Grandezza_Fisica Grandezza1 = {
        10.3,
        0.3
    };
    struct Grandezza_Fisica Grandezza2 = {
        3.45,
        0.7
    };
    struct Grandezza_Fisica Grandezza_Somma, Grandezza_Differenza, Grandezza_Prodotto, Grandezza_Quoziente, Grandezza_Potenza;
    Grandezza_Somma = Somma_Fisica(Grandezza1, Grandezza2);
    Grandezza_Differenza = Differenza_Fisica(Grandezza1, Grandezza2);
    Grandezza_Prodotto = Prodotto_Fisica(Grandezza1, Grandezza2);
    Grandezza_Quoziente = Divisione_Fisica(Grandezza1, Grandezza2);
    Grandezza_Potenza = Potenza_Fisica(Grandezza1, 2);
    printf("With the two physical quantities, after all the operations, we get:\nFor the sum: %0.2f as the value and %0.2f as the uncertainty;\nFor the subtraction: %0.2f as the value and %0.2f as the uncertainty;\nFor the multiplication: %0.2f as the value and %0.2f as the uncertainty;\nFor the division: %0.2f as the value and %0.2f as the uncertainty;\nFor the power: %0.2f as the value and %0.2f as the uncertainty. ", Grandezza_Somma.Valore, Grandezza_Somma.Incertezza, Grandezza_Differenza.Valore, Grandezza_Differenza.Incertezza, Grandezza_Prodotto.Valore, Grandezza_Prodotto.Incertezza, Grandezza_Quoziente.Valore, Grandezza_Quoziente.Incertezza, Grandezza_Potenza.Valore, Grandezza_Potenza.Incertezza);
}