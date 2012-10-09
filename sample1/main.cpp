#include <iostream>
#include "complex.hpp"

int main () {

	Complex comp_a(15, -3);
	Complex comp_b(23, -17);
	Complex comp_c(-3, 36);
	Complex comp_d(-28, 12);

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
	Complex comp_e = comp_a + comp_d + comp_c + comp_b;
	std::cout << "=> " << comp_e.to_string() << std::endl;

	// Substract comp_c to comp_e
	std::cout << "\n// x = (" << comp_e.to_string() << ") - (" <<  comp_c.to_string() << ")" << std::endl;
	Complex comp_f = comp_e - comp_c;
	std::cout << "=> " << comp_f.to_string() << std::endl;
}
