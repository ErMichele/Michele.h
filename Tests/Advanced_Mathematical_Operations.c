/* 
*/

#include "../Michele.h"

int main () {
    int A = 16, B = 10;
    double C = 3.435;
    struct Soluzioni_Quadratica Soluzioni = Formula_Quadratica(A, B, C);
    int Radice = RadiceQuadrata(A);
    int Fibonacci = Fibonacci_Numero(B);
    printf("After all the operations, we get:\nThe solutions to the quadratic formula are %.02lf and %.02lf;\nThe square root is %.02lf;\nThe %dth fibonacci number is %d.", Soluzioni.Soluzione_Più, Soluzioni.Soluzione_Meno, Radice, B, Fibonacci);
}