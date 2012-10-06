#include <iostream>
#include <sstream>
#include "complex.hpp"

// ComplexSample constructor
Complex::Complex( double real, double imag ) : _real(real), _imag(imag) 
{}

// Real number getter
double Complex::real()
{
	return _real;
}

// Imaginary number getter
double Complex::imag()
{
	return _imag;
}

// Add complex to this
void Complex::operator+=( Complex comp )
{
	_real += comp.real();
	_imag += comp.imag();
}

// Substract a complex to this
void Complex::operator-=( Complex comp )
{
	_real -= comp.real();
	_imag -= comp.imag();
}

// Add complex to this
Complex Complex::operator+( Complex comp )
{
	_real += comp.real();
	_imag += comp.imag();
	return *this;
}

// Substract a complex to this
Complex Complex::operator-( Complex comp )
{
	_real -= comp.real();
	_imag -= comp.imag();
	return *this;
}

// Return std::string complex
std::string Complex::to_string() 
{
	std::ostringstream ostr; 

	ostr << _real;

	if(_imag > 0) {
		ostr << " + ";
		ostr << _imag;
	} else {
		_imag = _imag*(-1);
		ostr << " - ";
		ostr << _imag;
	}
	ostr << "i";

	return ostr.str();
}
