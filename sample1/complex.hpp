#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>

class Complex {
	private:
		double _real;
		double _imag;

	public:
		Complex( double real, double imag );
		double real();
		double imag();
		std::string to_string();
		void operator+=( const Complex comp );
		void operator-=( const Complex comp );
		Complex operator+( const Complex comp );
		Complex operator-( const Complex comp );
};

#endif
