#include <iostream>
#include "circulo.h"
#include "retangulo.h"
#include "triangulo.h"

using std::cin;
using std::cout;
using std::endl;

void DisplayRefresh(forma **);

int main(){
	forma * p1[3] = {NULL};
	p1[0] = new circulo(2);
	p1[1] = new retangulo(2);
	p1[2] = new triangulo(2);

	DisplayRefresh(p1);

	for(int i=0;i<3;i++)
		if(p1[i]!=NULL){
			p1[i]->desenha();
		}

	for(int i=0;i<3;i++)
		if(p1[i]!=NULL)
			delete p1[i];

	return EXIT_SUCCESS;
}

void DisplayRefresh(forma ** a){
	cout << "TADAIMAAAAA" << endl;
}