#include <iostream>
#include "Siames.h"
using namespace std;

Siames::Siames(string vs,int vbp, int vc): Gato(vs, vbp), classyness(vc) {};
Siames::~Siames(){};
int Siames::getClassy() const { return classyness; };
void Siames::emitirSom() const {
	cout << "my name is " << getNome() << " and ";
	cout << "miau i am phabulous" << endl;
};