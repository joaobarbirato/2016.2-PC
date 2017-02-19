#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
using namespace std;
class Funcionario{
private:
	const string nome;
	const int codigo;
	double SFM;
public:
	string getNome() const;
	int getCodigo() const;
	double getSFM() const;
	bool setSFM(double);
	double remuneracao() const;

};

#endif