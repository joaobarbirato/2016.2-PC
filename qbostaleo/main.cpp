#include <iostream>
#include "Aluno.h"
#include "Professor.h"

using std::cout;
using std::string;
using std::endl;

/*MÉTODOS VIRTUAIS NÃO PUROS*/
void opovoqrsaber1(Pessoa *);	// FAZ POLY
void opovoqrsaber2(Pessoa &);	// FAZ POLY
//void opovoqrsaber3(Pessoa); 	// N FAZ POLY

int main(int argc, char const *argv[]){
	Pessoa * p[2] = {NULL};
	p[0] = new Aluno("jv");
	p[0]->saudacao(); 	// FUNFA método da classe base 
	p[0]->sofrer(); 	// N FUNFA método da classe derivada
	p[1] = new Professor("jv");

	for(int i=0;i<2;i++){
		if(p[i] != NULL){
			opovoqrsaber1(p[i]);
			opovoqrsaber2(*p[i]);
//			opovoqrsaber3(*p[i]); N FAZ POLY
		}
		cout << endl;
	}

	return 0;
}

void opovoqrsaber1(Pessoa * x){
	x->oqFaz();
};
void opovoqrsaber2(Pessoa & x){
	x.oqFaz();
};/*
void opovoqrsaber3(Pessoa x){
	x.oqFaz();
};*/