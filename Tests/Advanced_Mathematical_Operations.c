/*
 * Test Program: Advanced Mathematical Operations
 *
 * Description:
 * This test demonstrates several advanced mathematical functions from the Michele library:
 *
 * 1. Formula_Quadratica:
 *    Solves a quadratic equation of the form Ax² + Bx + C = 0.
 *
 * 2. Radice:
 *    Computes the n-th root of a number using Newton's method.
 *
 * 3. Fibonacci_Numero:
 *    Calculates the n-th Fibonacci number.
 *
 * 4. Potenza:
 *    Raises a number to an integer power.
 *
 * 5. Trigonometric Functions (Sen and Cos):
 *    Computes sine and cosine of angles provided in degrees.
 *
 * Each result is printed to verify correct functionality and precision.
 */

#include "../Michele.h"

int main(){
   int A = 8, B = 10, n = 3;
   double C = 3.435;
   int alpha = 90, beta = 45, gamma = 30;

   struct Soluzioni_Quadratica Soluzioni = Formula_Quadratica(A, B, C);
   double Radice_N = Radice(A, n, 0.00001);
   int Fibonacci = Fibonacci_Numero(B);
   double Potenza_N = Potenza(B, n);
   double Cos_90 = Cos(Gradi_Radiente(alpha));
   double Sen_30 = Sen(Gradi_Radiente(gamma));
   double Sen_45 = Sen(Gradi_Radiente(beta));
   double Cos_45 = Cos(Gradi_Radiente(beta));


   printf("=== Advanced Mathematical Operations ===\n");
   printf("1. Solutions to the quadratic equation (%dx^2 + %dx + %.3f = 0):\n", A, B, C);
   printf("   x1 = %.5lf\n", Soluzioni.Soluzione_Più);
   printf("   x2 = %.5lf\n", Soluzioni.Soluzione_Meno);

   printf("2. The %d-th root of %d is: %.5lf\n", n, A, Radice_N);
   printf("3. The %d-th Fibonacci number is: %d\n", B, Fibonacci);
   printf("4. %d raised to the power of %d is: %.5lf\n", B, n, Potenza_N);

   printf("5. Trigonometric values (in degrees):\n");
   printf("   cos(%d) = %.5lf\n", alpha, Cos_90);
   printf("   sin(%d) = %.5lf\n", gamma, Sen_30);
   printf("   sin(%d) = %.5lf\n", beta, Sen_45);
   printf("   cos(%d) = %.5lf\n", beta, Cos_45);

   return 0;
}