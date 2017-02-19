#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

class Animal{
private:
	string nome;
public:
	Animal(string="");
	virtual ~Animal();
	string getNome() const;
	virtual void emitirSom() const = 0 ;
	void comer() const;
};

#endif