# quadratic-equation-cpp

# Quadratic Equation Roots (C++)

A beginner-friendly C++ program that finds all the roots of a quadratic equation of the form `ax² + bx + c = 0`.

## About

The program takes the coefficients `a`, `b` and `c` as input, calculates the discriminant, and prints the roots. It handles all three cases: two different real roots, two equal real roots, and two complex roots.

## Formula

```
x = (-b ± √(b² - 4ac)) / 2a
```

The part `d = b² - 4ac` is called the **discriminant**.

| Discriminant | Type of roots |
|--------------|---------------|
| `d > 0` | Two different real roots |
| `d = 0` | Two equal real roots |
| `d < 0` | Two complex roots |

## Examples

```
Enter coefficients a, b and c: 1 -5 6
Roots are real and different.
Root 1 = 3
Root 2 = 2
```

```
Enter coefficients a, b and c: 1 2 1
Roots are real and equal.
Root 1 = Root 2 = -1
```

```
Enter coefficients a, b and c: 1 2 5
Roots are complex.
Root 1 = -1 + 2i
Root 2 = -1 - 2i
```

## How It Works

1. Read the coefficients `a`, `b` and `c` using `cin`.
2. If `a` is 0, print a message and stop, because the equation is not quadratic.
3. Calculate the discriminant `d = b * b - 4 * a * c`.
4. If `d > 0`, calculate and print two different real roots.
5. If `d == 0`, calculate and print one repeated real root.
6. If `d < 0`, calculate the real part and the imaginary part, and print the two complex roots.

## Things to Note

- `a` cannot be 0, otherwise the program would divide by zero.
- `double` is used so that decimal coefficients and roots work correctly.
- `sqrt()` and `fabs()` come from the `<cmath>` header.

## Concepts Used

- Data types (`double`)
- Input and output (`cin`, `cout`)
- `if` / `else if` / `else` conditions
- Math functions (`sqrt`, `fabs`) from `<cmath>`
- Arithmetic operators

## How to Run

Make sure a C++ compiler such as `g++` is installed.

```bash
# Compile
g++ quadratic_roots.cpp -o quadratic_roots

# Run (Linux / macOS)
./quadratic_roots

# Run (Windows)
quadratic_roots.exe
```

## Project Structure

```
quadratic-equation-cpp/
├── README.md
└── quadratic_roots.cpp
```

## Author

NAYLA IRFAN
B.Tech CSE
## License

This project is free to use for learning purposes.
