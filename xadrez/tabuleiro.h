#ifndef TABULEIRO_H
#define TABULEIRO_H

#include "peca.h"

class tabuleiro{
private:
	peca campo[8][8];
public:
	tabuleiro();
	~tabuleiro();
	void inserePeca();
	void removePeca();
	void movePeca();
};

#endif