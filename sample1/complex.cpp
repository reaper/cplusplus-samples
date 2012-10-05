#include <iostream>
#include "complex.hpp"
using namespace std;

Complex::Complex(complex<double> v_comp) {
	comp = v_comp;
}

void Complex::add(complex<double> v_comp) {
	tmp_comp = comp + v_comp;
}

void Complex::add(Complex v_complex) {
	tmp_comp = comp + v_complex.get_comp();
}

void Complex::subtract(complex<double> v_comp) {
	tmp_comp = comp - v_comp;
}

void Complex::subtract(Complex v_complex) {
	tmp_comp = comp - v_complex.get_comp();
}

complex<double> Complex::get_comp() {
	return comp;
}

string Complex::get_comp_as_string(complex<double> v_comp) {
	ostringstream ostr; 
	double real_comp = real(v_comp);
	double imag_comp = imag(v_comp);

	ostr << real_comp;

	if(imag_comp > 0) {
		ostr << " + ";
		ostr << imag_comp;
	} else {
		imag_comp = imag_comp*(-1);
		ostr << " - ";
		ostr << imag_comp;
	}
	ostr << "i";

	string str = ostr.str();
	return str;
}

string Complex::get_comp_as_string() {
	return get_comp_as_string(comp);	
}

string Complex::get_result_as_string() {
	return get_comp_as_string(tmp_comp);	
}
