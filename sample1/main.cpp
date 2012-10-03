#include <iostream>
#include <complex>
using namespace std;


int addition(int a, int b) {
	int r;
	r = a+b;
	return r;
}

int main ()
{
	complex<int> z(1, 2);
	complex<int> zz,I(0, 1); 
	zz=3+I*4; 
	complex<int> zzz = z + zz;
	cout<<z<<"+"<<zz<<"="<<zzz<<endl;  
	cout<<"Complexe Conjugue "<<conj(zzz)<<endl; 
	cout<<"Partie Reelle "<<real(zzz)<<endl; 
	cout<<"Partie Imaginaire "<<imag(zzz)<<endl; 
	cout<<"Module Carre "<<norm(zzz)<<endl; 
	cout<<"Module "<<abs(zzz)<<endl; 
	cout<<"Argument "<<arg(zzz)<<endl; 
	cout<<"I*I="<<I*I<<endl; 
	cout<<"sqrt(-1)="<<sqrt(complex<int>(-1))<<endl; 
	return 0;
}