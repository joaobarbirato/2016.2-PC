#ifndef COMPLEXO_H
#define COMPLEXO_H

#include <iostream>

using std::ostream;

class Complexo{
private:
	double real;
	double imag;
public:
	Complexo(double=0, double=1); // construtor
	~Complexo();// destrutor
	
	//get
	double getr();
	double geti();

	//set
	void setr(double);
	void seti(double);

	// sobrecarga soma
	Complexo operator+(Complexo);

	// sobrecarga subtração
	Complexo operator-(Complexo x);

	// sobrecarga multiplicação

	//sobrecarga saída
	friend ostream & operator<<(ostream &, Complexo);

};


#endif