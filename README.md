# Michele.h

**Michele.h** is a powerful and flexible library for the C programming language that simplifies advanced computations, enhances console output, and facilitates operations with physical quantities. Built with clarity and efficiency in mind, it’s an essential tool for scientific applications, mathematical explorations, and general-purpose programming.

---

## Features Overview

### **1. Console Text Formatting**
Take your terminal output to the next level with customizable and colorful text:
- **Text Colors**: Add vibrancy with macros like `ROSSO` (Red), `VERDE` (Green), `GIALLO` (Yellow), and `CIANO` (Cyan).
- **Background Colors**: Create contrast using background macros such as `S_ROSSO` (Red Background) and `S_BLU` (Blue Background).
- **Text Styles**: Emphasize text with macros like `GRASSETTO` (Bold), `SOTTOLINEATO` (Underline), `LAMPEGGIANTE` (Blinking), and `INVERSIONE` (Inverted Text).

---

### **2. Mathematical Operations on Physical Quantities**
Perform accurate calculations on physical quantities with uncertainties:
- **Physical Quantity Structure (`Grandezza_Fisica`)**: Define quantities with a value (`Valore`) and uncertainty (`Incertezza`).
- **Supported Operations**:
  - **Addition & Subtraction**: Propagate uncertainties accurately with `Somma_Fisica` and `Differenza_Fisica`.
  - **Multiplication & Division**: Handle uncertainties in product and ratio calculations using `Prodotto_Fisica` and `Divisione_Fisica`.
  - **Power & Root**: Use `Potenza_Fisica` to elevate quantities to any power or `Radice_Fisica` to compute the n-th root, both with precise uncertainty propagation.

---

### **3. Advanced Mathematical Functions**
Solve challenging mathematical problems with ease:
- **Quadratic Equation Solver (`Formula_Quadratica`)**:
  - Solve quadratic equations \( Ax^2 + Bx + C = 0 \), returning both solutions (if they exist).
- **Fibonacci Sequence (`Fibonacci_Numero`)**:
  - Compute the \( n \)-th Fibonacci number efficiently.
- **Root Calculation (`Radice`)**:
  - Compute the n-th root of a number using Newton’s method, ensuring high precision.

---

### **4. Utility Functions**
Simplify your workflows with utility features:
- **String Conversion (`UniformaString`)**:
  - Normalize strings to lowercase for easier comparisons.
- **Logging with Timestamps (`Logging`)**:
  - Create detailed logs with timestamps for debugging and tracking program behavior. Logs are written to both the console and a file.

---

### **Include the Library**
Include Michele.h in your project:

```c
#include "Michele.h"
```

---

**This library is still evolving with exciting new features on the way! 🚀**  