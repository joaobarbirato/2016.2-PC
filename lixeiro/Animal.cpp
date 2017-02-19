#include <iostream>
#include "Animal.h"
using namespace std;

Animal::Animal(string vnome): nome(vnome){};
Animal::~Animal(){};
string Animal::getNome() const {return nome;};
void Animal::comer() const {
	cout << "hmm nom nom nom" << endl;
}
void Animal::emitirSom() const {
	cout << "help me, I'm " << getNome() ;
	cout << " yadda yadda yadda" << endl;
};