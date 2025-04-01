# Michele.h Library Documentation

**Michele.h** is a powerful and flexible library designed for C programming. It simplifies advanced computations, enhances console output, and facilitates operations with physical quantities. With its clear and efficient design, **Michele.h** is an essential tool for scientific applications, mathematical explorations, and general-purpose programming.

---

## Features Overview

### **1. Console Text Formatting**
Enhance your terminal output with customizable and vibrant text:

- **Text Colors**: Add color to your terminal output with macros:
  - `ROSSO`: Red text color.
  - `VERDE`: Green text color.
  - `GIALLO`: Yellow text color.
  - `BLU`: Blue text color.
  - `CIANO`: Cyan text color.

- **Background Colors**: Create contrast with background colors:
  - `S_ROSSO`: Red background color.
  - `S_VERDE`: Green background color.
  - `S_GIALLO`: Yellow background color.
  - `S_BLU`: Blue background color.

- **Text Styles**: Emphasize your messages using text styles:
  - `GRASSETTO`: Bold text style.
  - `SOTTOLINEATO`: Underlined text style.
  - `LAMPEGGIANTE`: Blinking text style.
  - `INVERSIONE`: Inverted text style.

- **Reset Formatting**: Reset to default formatting using:
  - `RESET`: Resets text formatting to default.

---

### **2. Mathematical Operations on Physical Quantities**
Easily perform operations on physical quantities while considering their uncertainties:

- **Physical Quantity Structure (`Grandezza_Fisica`)**: Define quantities that include both a value (`Valore`) and an uncertainty (`Incertezza`).

- **Supported Operations**:
  - **Addition & Subtraction**: Accurately propagate uncertainties using `Somma_Fisica` and `Differenza_Fisica`.
  - **Multiplication & Division**: Manage uncertainties in product and ratio calculations with `Prodotto_Fisica` and `Divisione_Fisica`.
  - **Power & Root**: Raise physical quantities to a power using `Potenza_Fisica`, or calculate the n-th root with `Radice_Fisica`, both with precise uncertainty handling.

---

### **3. Advanced Mathematical Functions**
Solve complex mathematical problems with ease:

- **Quadratic Equation Solver (`Formula_Quadratica`)**:
  - Solve quadratic equations of the form \( Ax^2 + Bx + C = 0 \), returning both solutions (if they exist).

  **`Soluzioni_Quadratica` Structure**:
  - The structure that holds the solutions for a quadratic equation:
    - `Soluzione_Più`: The positive solution (root).
    - `Soluzione_Meno`: The negative solution (root).

- **Fibonacci Sequence (`Fibonacci_Numero`)**: 
  - Efficiently calculate the \( n \)-th Fibonacci number.

- **Root Calculation (`Radice`)**: 
  - Use Newton's method to compute the n-th root of a number with high precision.

- **Power Calculation (`Potenza`)**: 
  - Raise a number to any integer exponent. Handles both positive and negative exponents, returning the computed value.

---

### **4. Utility Functions**
Streamline your workflows with these utility features:

- **String Conversion (`UniformaString`)**: 
  - Convert strings to lowercase for easier comparisons and uniformity.

- **Logging with Timestamps (`Logging`)**: 
  - Log detailed messages with timestamps for debugging and tracking program behavior. Logs are written to both the console and a file.

---

### **How to Include the Library**

To use the **Michele.h** library, include it in your project with the following directive:

```c
#include "Michele.h"
```

To view a set of **Tests** for the various applications, they can be seen in the Tests folder.

---

**This library is still evolving with exciting new features on the way! 🚀**  