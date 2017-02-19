#include <iostream>
#include "matriz.h"

using std::cout;
using std::endl;

Matriz::Matriz(int linhas, int col): nColunas(col), nLinhas(linhas){

	m = new int*[nLinhas];
	for(int i=0;i<nLinhas;i++)
		m[i] = new int(nColunas);

	for(int i=0; i < nLinhas; i++)
		for(int j=0; j < nColunas; j++)
			m[i][j] = 1;

}; // construtor
Matriz::~Matriz(){ delete [] m; }; // destrutor

//get
int Matriz::getnCol() const { return nColunas; };
int Matriz::getnLin() const { return nLinhas; };
int Matriz::getEle(int l, int c) const { 
	if(c >= nColunas || l >= nLinhas )
		return EXIT_SUCCESS;

	return m[l][c];
};

//set
bool Matriz::setEle(int l, int c, int val){
	if(c >= nColunas || l >= nLinhas )
		return false;
	m[l][c] = val;
	return true;
};

// sobrecarga soma
Matriz & Matriz::operator+(const Matriz & x){
	if(nColunas == x.getnCol() && nLinhas == x.getnLin()){
		Matriz & resultado(*this);//(nLinhas, nColunas);
		for(int i=0; i < nLinhas; i++)
			for(int j=0; j<nColunas; j++)
				resultado.setEle(i,j, m[i][j] + x.getEle(i,j));
		return resultado;
	}
};
// sobrecarga atribuição
Matriz & Matriz::operator=(const Matriz & x){
	if(x.getnCol() == nColunas && x.getnLin() == nLinhas){
		for(int i=0;i<nLinhas;i++)
			for(int j=0;j<nColunas;j++)
				m[i][j] = x.getEle(i,j);
		return *this;
	}
};
