/* Test to verify the functionalities of advanced mathematical operations.
 * The code calculates the solutions to a quadratic equation, computes an n th root,
 * finds a Fibonacci number based on predefined values and
 * calculates a n th power */

#include "../Michele.h"

int main() {
   int A = 8, B = 10, n = 3; // n represents the index of the root
   double C = 3.435;
   struct Soluzioni_Quadratica Soluzioni = Formula_Quadratica(A, B, C);
   float X = Radice(A, n, 0.00001);
   int Fibonacci = Fibonacci_Numero(B);
   float Y = Potenza(B, n);

   printf("Library advanced mathematical operations:\n");
   printf("1. The solutions to the quadratic equation are: %.02lf and %.02lf.\n", Soluzioni.Soluzione_Più, Soluzioni.Soluzione_Meno);
   printf("2. The %dth root of %d is: %.02lf.\n", n, A, X);
   printf("3. The %dth Fibonacci number is: %d.\n", B, Fibonacci);
   printf("4. The %dth power of %d is: %.02lf.\n", n, B, Y);
   return 0;
}
