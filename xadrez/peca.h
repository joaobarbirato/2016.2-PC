#ifndef PECA_H
#define PECA_H

#include <iostream>
using namespace std;
// false= branca
// true = preta
class peca{
private:
	const bool cor;
	int x, y;
public:
	peca(bool=false,int=0,int=0);
	virtual ~peca();
	bool getCor() const;
	int getx() const;
	int gety() const;
	bool setx(int);
	bool sety(int);
	virtual bool move(int, int) = 0;
};

#endif