#ifndef ALUNO_H
#define ALUNO_H
#include "Pessoa.h"
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Aluno: public Pessoa{
public:
	Aluno(string="");
	~Aluno();
	void oqFaz() const;
	void sofrer() const;
};

#endif