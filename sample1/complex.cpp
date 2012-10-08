#include <iostream>
#include <sstream>
#include "complex.hpp"

// ComplexSample constructor
Complex::Complex( double real, double imag ) : 
	m_real(real), 
	m_imag(imag) 
{}

// Real number getter
double Complex::real() const
{
	return m_real;
}

// Imaginary number getter
double Complex::imag() const
{
	return m_imag;
}

// Add complex to this
Complex& Complex::operator+=( const Complex &comp )
{
	m_real += comp.real();
	m_imag += comp.imag();
	return *this;
}

// Substract a complex to this
Complex& Complex::operator-=( const Complex &comp )
{
	m_real -= comp.real();
	m_imag -= comp.imag();
	return *this;
}

// Add complex to this
Complex Complex::operator+(const Complex comp ) const
{
	Complex res = *this;
	res += comp;
	return res;
}

// Substract a complex to this
Complex Complex::operator-(const Complex comp ) const
{
	Complex res = *this;
	res -= comp;
	return res;
}

// Return std::string complex
std::string Complex::to_string() const
{
	std::ostringstream ostr; 

	ostr << m_real;

	if(m_imag > 0) {
		ostr << " + ";
		ostr << m_imag;
	} else {
		ostr << " - ";
		ostr << m_imag*(-1);
	}
	ostr << "i";

	return ostr.str();
}
