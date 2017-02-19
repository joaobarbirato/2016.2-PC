#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "Pessoa.h"
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Professor: public Pessoa{
public:
	Professor(string="");
	~Professor();
	void oqFaz() const;
	void leciona() const;
};

#endif