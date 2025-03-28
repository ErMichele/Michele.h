#include "../Michele.h"

int main () {
    int A = 16, B = 10;
    double C = 3.435;
    struct Soluzioni_Quadratica Soluzioni = Formula_Quadratica(A, B, C);
    int Radice = RadiceQuadrata(A);
    int Fibonacci = Fibonacci_Numero(B);
    printf("%d, %d, %.02lf, %.02lf", Radice, Fibonacci, Soluzioni.Soluzione_Meno, Soluzioni.Soluzione_Più);
}