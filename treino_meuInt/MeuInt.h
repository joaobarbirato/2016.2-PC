#ifndef MeuInt_h
#define MeuInt_h

#include <iostream>

using std::ostream;
using std::istream;

class MeuInt{
// metodos friend

private: // atributos
	int inteiro;

public: // metodos
	MeuInt(int=0);
	~MeuInt();

	int getInt() const;
	void setInt(int);

	// sobrecarga recebe
	MeuInt operator=(MeuInt);
	MeuInt operator=(int);

	// sobrecarga soma
	MeuInt operator+(MeuInt);
	MeuInt operator+(int);
	friend MeuInt operator+(int, MeuInt);

	// sobrecarga subtração
	MeuInt operator-(MeuInt);
	MeuInt operator-(int);
	friend MeuInt operator-(int, MeuInt);
	MeuInt & operator-();

	// sobrecarga multiplicação
	MeuInt operator*(MeuInt); // entre MeuInt
	MeuInt operator*(int); // MeuInt * int
	friend MeuInt operator*(int, MeuInt); // int * MeuInt

	// sobrecarga divisão
	MeuInt operator/(MeuInt);
	MeuInt operator/(int);
	friend MeuInt operator/(int, MeuInt);

	// sobrecarga comparação
	bool operator>(MeuInt);
	bool operator>(int);
	friend bool operator>(int, MeuInt);
	bool operator<(MeuInt);
	bool operator<(int);
	friend bool operator<(int, MeuInt);
	bool operator==(MeuInt);
	bool operator==(int);
	friend bool operator==(int, MeuInt);

	// sobrecarga saída
	friend ostream & operator<<(ostream &, const MeuInt);

	// sobregarga entrada
	friend istream & operator>>(istream &, MeuInt &);
};


#endif