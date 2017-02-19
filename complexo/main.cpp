#include <iostream>
#include "complexo.h"

using std::cout;
using std::endl;

// protótipos
ostream & operator<<(ostream & saida, Complexo z);

int main(){
	Complexo z1;
	//cout << z1.getr() << " + " << z1.geti() << "i" << endl;
	cout << z1;
	
	return EXIT_SUCCESS;
}

// sobrecarga saída
ostream & operator<<(ostream & saida, Complexo z){
	saida << z.real << " + " << z.imag << "i" << endl;
	return saida;
}