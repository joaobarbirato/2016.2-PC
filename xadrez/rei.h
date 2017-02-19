#ifndef REI_H
#define REI_H
#include "peca.h"

class rei: public peca{
public:
	rei(bool=false,int=0,int=0);
	~rei();
	bool move(int, int);
};

#endif