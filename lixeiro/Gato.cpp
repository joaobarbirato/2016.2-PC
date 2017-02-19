#include <iostream>
#include "Gato.h"
using namespace std;

Gato::Gato(string vnome,int vbp): Animal(vnome), bolaPelos(vbp){};
Gato::~Gato(){};
int Gato::getBP() const { return bolaPelos; };
void Gato::emitirSom() const {
	cout << "pr pr feed me hooman. ";
	cout << "you are nothing but a humble servent of your supreme lord " << getNome() << endl;
};
void Gato::cairDePe() const{
	cout << "you gently fall prr" << endl;
};