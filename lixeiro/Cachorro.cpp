#include <iostream>
#include "Cachorro.h"
using namespace std;

Cachorro::Cachorro(string vnome, int vpulgas): Animal(vnome),nPulgas(vpulgas){};
Cachorro::~Cachorro(){};
int Cachorro::getPulgas() const {return nPulgas;};
void Cachorro::emitirSom() const {
	cout << "au au au ";
	cout << "mesa be " << getNome() << endl;
};
void Cachorro::abanarRabo() const {
	cout << "abanei o rabo" << endl;
};