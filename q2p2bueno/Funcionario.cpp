#include <iostream>
#include "Funcionario.h"
using namespace std;
string Funcionario::getNome() const{ return nome; };
int Funcionario::getCodigo() const{ return codigo; };
double Funcionario::getSFM() const{ return SFM; };
bool Funcionario::setSFM(double x){
	if(x > 0){
		SFM = x;
		return true;
	}
	return false;
};

double Funcionario::remuneracao() const{ return SFM; };