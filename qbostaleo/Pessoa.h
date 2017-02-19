#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Pessoa{
private:
	string nome;
public:
	Pessoa(string="");
	virtual ~Pessoa();
	virtual void oqFaz() const = 0; //{cout << "oi" << endl;};
	void saudacao() const;
};

#endif