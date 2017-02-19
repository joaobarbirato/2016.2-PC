#include <iostream>
#include "fracao.h"

using std::cout;
using std::endl;
using std::istream;
using std::ostream;

// construtor
Fracao::Fracao(int n, int d){
	if( d != 0 ){
		denominador = d;
		numerador = n;
	}
};

// métodos set
void Fracao::setNum(int vn){
	numerador = vn;
};

bool Fracao::setDen(int vd){
	if( vd != 0 ){
		denominador = vd;
		return true;
	}
	return false;
};

// métodos get
int Fracao::getNum() const { return numerador; };
int Fracao::getDen() const { return denominador; };

// outros
void Fracao::imprime(){
	cout << numerador << "/" << denominador << endl;
};

Fracao Fracao::operator*(const Fracao & f2) const{
	Fracao produto(this->getNum()*f2.getNum(), this->getDen()*f2.getDen());
	return produto;
};

Fracao Fracao::operator++(int fantasma){
	Fracao F_ANTES_INC = *this;
	numerador = numerador + denominador;
	return F_ANTES_INC;
};

Fracao & Fracao::operator++ (){
	numerador += denominador;
	return *this;
};

Fracao Fracao::operator*(int k){
	return Fracao(k*getNum(), getDen());
};

bool Fracao::operator>(const Fracao & f) const{
	if((double)numerador/denominador > (double)f.getNum()/f.getDen()) return true;
	else return false;
};

// Globais:
ostream & operator<<(ostream & saida, const Fracao & x){
	saida << x.numerador << "/" << x.denominador;
	return saida;
};

istream & operator>>(istream &entrada, Fracao & x){
	int d, n;
	entrada >> n;
	entrada.ignore();
	entrada >> d;
	x.setNum(n);
	x.setDen(d);
	return entrada;
};

Fracao operator*(int k, const Fracao & f){
	return f.numerador * k;
};