#ifndef MATRIZ_H
#define MATRIZ_H

#include <iostream>

using std::ostream;

class Matriz{
private:
	const int nColunas;
	const int nLinhas;
	int **m;
public:
	Matriz(int=1, int=1);
	~Matriz();
 
	int getnCol() const;
	int getnLin() const;
	int getEle(int, int) const;

	bool setEle(int, int, int);

	friend void printTam(const Matriz & x);

	// sobrecarga atribuição
	Matriz & operator=(const Matriz & x);

	// sobrecarga soma
	Matriz & operator+(const Matriz & x);

	// sobrecarga saída
	friend ostream & operator<<(ostream &, Matriz & x);
};

#endif