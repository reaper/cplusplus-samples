#include <iostream>
#include "complex.h"
using namespace std;

Complex::Complex() {
    real = imag = 0;
}

void Complex::addition (Complex op1, Complex op2) {
    real = op1.real + op2.real;
    imag = op1.imag + op2.imag;
}

void Complex::subtraction (Complex op1, Complex op2) {
     real = op1.real - op2.real;
     imag = op1.imag - op2.imag;
}
