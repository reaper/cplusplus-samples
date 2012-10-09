#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>

class Complex {
	private:
		double m_real;
		double m_imag;

	public:
		Complex(double real, double imag);
		double real() const;
		double imag() const;
		std::string to_string() const;
		Complex& operator+=(const Complex &comp);
		Complex& operator-=(const Complex &comp);
		Complex operator+(const Complex &comp) const;
		Complex operator-(const Complex &comp) const;
};

#endif
