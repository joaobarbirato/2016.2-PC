#include <iostream>
#include "fracao.h"

using namespace std;

int main(){
	Fracao jv1(1,2);
	Fracao jv2(3,4);
	Fracao jv3;
	Fracao jv4;

	cout << jv1 << endl;
	cout << jv2 << endl;
	cout << jv3 << endl;
	cout << jv4 << endl;

	cin >> jv1;
	cout << endl << jv1 << endl;
	cout << "TADAIMA!" << endl;

	jv1 = 5*jv1;

	cout << endl << jv1 << endl;	


	jv3 = jv1 * jv2;

	cout << "TADAIMA!" << endl;
	
	cout << "jv1 * jv2: ";
	jv3.imprime();

	jv4 = jv1++;
	cout << "jv4: ";
	jv4.imprime();

	jv4 = ++jv2;
	cout << "jv4: ";
	jv4.imprime();

	jv1 > jv2;

	return 0;
}
