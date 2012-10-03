#include <iostream>
#include "complex_processing.h"
using namespace std;

ComplexProcessing::ComplexProcessing() {
}

complex<double> ComplexProcessing::addition (complex<double> a, complex<double> b) {
	complex<double> result;
	result = a + b;
	
	return result;
}

complex<double> ComplexProcessing::subtraction (complex<double> a, complex<double> b) {
	complex<double> result;
	result = a - b;
	
	return result;
}
