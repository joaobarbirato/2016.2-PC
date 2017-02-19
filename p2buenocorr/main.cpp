#include <iostream>
#include "q1.h"
using namespace std;
ostream & operator<<(ostream &, const Complexo &);
Complexo operator+(const double &, const Complexo &);

int main(){

	Complexo A(8.0,1.0), B;
	Complexo C(A);

	cout <<"A = "<< A << endl << "B = " << B << endl;
	cout <<"C = "<< C << endl;
	B = A + 5;
	cout <<"B = A + 5 = " << B << endl;
	cout <<"++C (incrementa parte real): " <<++C<<endl;
	cout <<"A++ (incrementa parte real): " <<A++<<endl;
	cout << A << endl;

	B = 5.0 + B;
	cout << "B = 5.0 + B = "<< B << endl;

	if( (C==B) || (A!=C) )
		cout << "Condição satisfeita" << endl;
	
	return 0;
}

ostream & operator<<(ostream & saida, const Complexo & i){
	saida << i.getr() <<"+"<< i.geti() <<"i";
	return saida;
};

Complexo operator+(const double & d, const Complexo & z){
	return Complexo(z.getr() + d, z.geti());
};