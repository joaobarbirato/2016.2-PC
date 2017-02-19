#include "Aluno.h"
#include <iostream>
using std::cout;
using std::endl;
Aluno::Aluno(string a): Pessoa(a){};
Aluno::~Aluno(){};
void Aluno::oqFaz() const { cout << "estuda!!"<< endl; };
void Aluno::sofrer() const {cout<< "cries on it's bad notes" << endl;};