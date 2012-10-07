#include <iostream>
#include <sstream>
#include "complex.hpp"

// ComplexSample constructor
Complex::Complex( double real, double imag ) : m_real(real), m_imag(imag) 
{}

// Real number getter
double Complex::real()
{
	return m_real;
}

// Imaginary number getter
double Complex::imag()
{
	return m_imag;
}

// Add complex to this
Complex Complex::operator+=( Complex comp )
{
	m_real += comp.real();
	m_imag += comp.imag();

	return *this;
}

// Substract a complex to this
Complex Complex::operator-=( Complex comp )
{
	m_real -= comp.real();
	m_imag -= comp.imag();

	return *this;
}

// Add complex to this
Complex Complex::operator+( Complex comp )
{
	m_real += comp.real();
	m_imag += comp.imag();
	return *this;
}

// Substract a complex to this
Complex Complex::operator-( Complex comp )
{
	m_real -= comp.real();
	m_imag -= comp.imag();
	return *this;
}

// Return std::string complex
std::string Complex::to_string() 
{
	std::ostringstream ostr; 

	ostr << m_real;

	if(m_imag > 0) {
		ostr << " + ";
		ostr << m_imag;
	} else {
		m_imag = m_imag*(-1);
		ostr << " - ";
		ostr << m_imag;
	}
	ostr << "i";

	return ostr.str();
}
