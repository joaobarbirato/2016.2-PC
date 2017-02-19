#include <iostream>
#include "tabuleiro.h"
using namespace std;

tabuleiro::tabuleiro(){
	for(int i=0;i<8;i++)
		for(int j=0;j<8;j++)
			campo[i][j] = "-";
};
tabuleiro::~tabuleiro(){};

void tabuleiro::inserePeca(){};
void tabuleiro::removePeca(){};
void tabuleiro::movePeca(){};