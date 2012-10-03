#include <iostream>
#include <complex>
#include "complex.h"
using namespace std;

int main () {

	// A = 12 + 4i
	complex<double> a(12, 4);
	// B = -45 + 2,5
	complex<double> b(-45, 2.5);

	Complex comp_a(a);
	cout << "Create complex A = " << comp_a.get_comp_as_string() << endl;
	Complex comp_b(b);
	cout << "Create complex B = " << comp_b.get_comp_as_string() << endl;

	cout << "Addition: A + B" << endl;
	comp_a.add(comp_b);
	cout << comp_a.get_result_as_string() << endl;

	cout << "Addition: B - A" << endl;
	comp_b.subtract(comp_a);
	cout << comp_b.get_result_as_string() << endl;
}
