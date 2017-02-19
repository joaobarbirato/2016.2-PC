#ifndef GERENTE_H
#define GERENTE_H
#include "Funcionario.h"

class Gerente: public Funcionario{
private:
	int supervisao;
public:
	int getSup() const;
	bool setSup(int);
	double remuneracao() const;
};

#endif