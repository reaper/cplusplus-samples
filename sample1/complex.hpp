#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>

class Complex {
	private:
		double m_real;
		double m_imag;

	public:
		Complex( double real, double imag );
		double real();
		double imag();
		std::string to_string();
		Complex operator+=( const Complex comp );
		Complex operator-=( const Complex comp );
		Complex operator+( const Complex comp );
		Complex operator-( const Complex comp );
};

#endif
