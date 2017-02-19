#include "Pessoa.h"
#include <iostream>
using std::cout;
using std::string;
using std::endl;

Pessoa::Pessoa(string a): nome(a) {};
Pessoa::~Pessoa(){};
//void Pessoa::oqFaz() const { cout << "nada neh" << endl; };
void Pessoa::saudacao() const { cout << "tdbom" << endl; };