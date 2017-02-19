#include <iostream>
#include "MeuInt.h"

using std::ostream;
using std::istream;
using std::cout;
using std::endl;

MeuInt::MeuInt(int vint): inteiro(vint){}; // construtor
MeuInt::~MeuInt(){}; // destrutor

void MeuInt::setInt(int vint){ inteiro = vint; }; //set
int MeuInt::getInt() const { return inteiro; }; //get

// sobrecarga recebe
MeuInt MeuInt::operator=(MeuInt x){
	setInt(x.getInt());
	return x;
};
MeuInt MeuInt::operator=(int x){
	setInt(x);
	return getInt();
};

// sobrecarga soma
MeuInt MeuInt::operator+(MeuInt x){
	return MeuInt(x.getInt() + inteiro);
};
MeuInt MeuInt::operator+(int x){
	return MeuInt(x + inteiro);
};
MeuInt operator+(int vint, MeuInt vmeuint){
	return MeuInt(vint + vmeuint.getInt());
};

// sobrecarga subtração
MeuInt MeuInt::operator-(MeuInt x){
	return MeuInt( -x.getInt() + inteiro);
};
MeuInt MeuInt::operator-(int x){
	return MeuInt( -x + inteiro);
};
MeuInt operator-(int vint, MeuInt vmeuint){
	return MeuInt(vint - vmeuint.getInt());
};
MeuInt & MeuInt::operator-(){
	inteiro = -inteiro;
	return *this;
};

// sobrecarga multiplicação
MeuInt MeuInt::operator*(MeuInt x){ // funcionando tb YAY
	return MeuInt(inteiro*x.getInt());
};
MeuInt MeuInt::operator*(int x){
	return MeuInt(getInt()*x);
};
MeuInt operator*(int vint, MeuInt vmeuint){
	return MeuInt(vmeuint * vint);
};

// sobrecarga divisão
MeuInt MeuInt::operator/(MeuInt x){
	return MeuInt(inteiro / x.getInt());
};
MeuInt MeuInt::operator/(int x){
	return MeuInt(inteiro / x);
};
MeuInt operator/(int vint, MeuInt vmeuint){
	return MeuInt(vint / vmeuint.getInt());
};

// sobrecarga comparação

	// maior que
bool MeuInt::operator>(MeuInt x){
	return inteiro > x.getInt();
};
bool MeuInt::operator>(int x){
	return inteiro > x;
};
bool operator>(int vint, MeuInt vmeuint){
	return vint > vmeuint.getInt();
};

	// menor que
bool MeuInt::operator<(MeuInt x){
	return inteiro < x.getInt();
};
bool MeuInt::operator<(int x){
	return inteiro < x;
};
bool operator<(int vint, MeuInt vmeuint){
	return vint < vmeuint.getInt();
};

	// igual a
bool MeuInt::operator==(MeuInt x){
	return inteiro == x.getInt();
};
bool MeuInt::operator==(int x){
	return inteiro == x;
};
bool operator==(int vint, MeuInt vmeuint){
	return vint == vmeuint.getInt();
};

// sobrecarga entrada
istream &operator>>(istream & entrada, MeuInt & x){
	int ventrada;
	entrada >> ventrada;
	x.setInt(ventrada);
	return entrada;
};

// sobrecarga saída
ostream & operator<<(ostream & saida, const MeuInt x){
	saida << x.inteiro;
	return saida;
};