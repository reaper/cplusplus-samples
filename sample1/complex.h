#include <iostream>
#include <complex>
using namespace std;

class Complex {
	private:
		complex<double> comp;
		complex<double> tmp_comp;

		string get_comp_as_string(complex<double> v_comp);

	public:
		complex<double> get_comp();
		Complex(complex<double> v_comp);
		void add(complex<double> v_comp);
		void add(Complex v_complex);
		void subtract(complex<double> v_comp);
		void subtract(Complex v_complex);
		string get_comp_as_string();
		string get_result_as_string();
};
