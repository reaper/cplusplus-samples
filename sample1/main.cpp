#include <iostream>
#include "complex.hpp"

int main () {

	Complex comp_a(double(15), double(-3));
	Complex comp_b(double(23), double(-17));
	Complex comp_c(double(-3), double(36));
	Complex comp_d(double(-28), double(12));

	// Add comp_b to comp_a
	std::cout << "// (" << comp_a.to_string() << ") += (" << comp_b.to_string() << ")" << std::endl;
	comp_a += comp_b;
	std::cout << "=> " << comp_a.to_string() << std::endl;

	// Substract comp_c to comp_a
	std::cout << "\n// (" << comp_a.to_string() << ") -= (" << comp_c.to_string() << ")" << std::endl;
	comp_a -= comp_c;
	std::cout << "=> " << comp_a.to_string() << std::endl;

	// Add comp_d to comp_a
	std::cout << "\n// x = (" << comp_a.to_string() << ") + (" <<  comp_d.to_string() << ")" << std::endl;
	Complex comp_e = comp_a + comp_d;
	std::cout << "=> " << comp_e.to_string() << std::endl;

	// Substract comp_c to comp_e
	std::cout << "\n// x = (" << comp_e.to_string() << ") - (" <<  comp_c.to_string() << ")" << std::endl;
	Complex comp_f = comp_e - comp_c;
	std::cout << "=> " << comp_f.to_string() << std::endl;
}
