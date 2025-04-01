/* Test to verify the functionalities of mathematical operations on physical quantities.
 * The code creates three physical quantities with predefined values and uncertainties.
 * It performs various operations (sum, subtraction, multiplication, division, power, and root).
 * The results, including values and uncertainties, are printed in a readable format to the terminal.
 */

#include "../Michele.h"

int main() {
    struct Grandezza_Fisica Grandezza1 = {10.3, 0.3};
    struct Grandezza_Fisica Grandezza2 = {3.45, 0.7};
    struct Grandezza_Fisica GrandezzaRadicando = {8.0, 0.5};

    struct Grandezza_Fisica Grandezza_Somma, Grandezza_Differenza, Grandezza_Prodotto, Grandezza_Quoziente, Grandezza_Potenza, Grandezza_Radice;
    int Indice = 3, Esponente = 2;

    Grandezza_Somma = Somma_Fisica(Grandezza1, Grandezza2);
    Grandezza_Differenza = Differenza_Fisica(Grandezza1, Grandezza2);
    Grandezza_Prodotto = Prodotto_Fisica(Grandezza1, Grandezza2);
    Grandezza_Quoziente = Divisione_Fisica(Grandezza1, Grandezza2);
    Grandezza_Potenza = Potenza_Fisica(Grandezza1, Esponente);
    Grandezza_Radice = Radice_Fisica(GrandezzaRadicando, Indice);

    printf("With the two physical quantities, after all the operations, we get:\n");
    printf("1. For the sum: %.2f as the value and %.2f as the uncertainty.\n", Grandezza_Somma.Valore, Grandezza_Somma.Incertezza);
    printf("2. For the subtraction: %.2f as the value and %.2f as the uncertainty.\n", Grandezza_Differenza.Valore, Grandezza_Differenza.Incertezza);
    printf("3. For the multiplication: %.2f as the value and %.2f as the uncertainty.\n", Grandezza_Prodotto.Valore, Grandezza_Prodotto.Incertezza);
    printf("4. For the division: %.2f as the value and %.2f as the uncertainty.\n", Grandezza_Quoziente.Valore, Grandezza_Quoziente.Incertezza);
    printf("5. For the %dth power: %.2f as the value and %.2f as the uncertainty.\n", Esponente, Grandezza_Potenza.Valore, Grandezza_Potenza.Incertezza);
    printf("6. For the %dth root: %.2f as the value and %.2f as the uncertainty.\n", Indice, Grandezza_Radice.Valore, Grandezza_Radice.Incertezza);

    return 0;
}