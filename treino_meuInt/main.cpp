// OBJETIVO: resolver equações do segundo grau
//			 classificar equações do segundo grau

#include <iostream>
#include <cmath>

#include "MeuInt.h"

using std::cout;
using std::cin;
using std::endl;

MeuInt delta(MeuInt, MeuInt, MeuInt);
void calcRaizes(MeuInt, MeuInt, MeuInt);

int main(){
	// declarar variáveis
	// Ax² + Bx + C = 0
	MeuInt A, B, C;
	double r1, r2; // raízes

	// entrada
	cout << "Entre com os coeficientes da equacao:" << endl;
	cin >> A >> B >> C;

	// procedimento principal:
	calcRaizes(A, B, C);

	// fim do programa 
	system("PAUSE");

	return EXIT_SUCCESS;
}// fim main

// FUNÇÕES

// Objetivo: calcular o delta
// - variáveis: coeficientes a, b, c da equação do 2o grau
MeuInt delta(MeuInt a, MeuInt b, MeuInt c){
	return b*b - 4 * a * c;
}// fim delta

// PROCEDIMENTOS

// Objetivo: calcular as raízes e exibí-las na tela
void calcRaizes(MeuInt a, MeuInt b, MeuInt c){
	MeuInt *raizes;

	if(delta(a,b,c) < 0){ // nenhuma raíz
		cout << "SEM RAIZES" << endl;
		return;
	}else if(delta(a,b,c) == 0){ // uma raíz
		raizes = new MeuInt(1);
		raizes[0] = -b/(2*a);
		cout << "RAIZ = " << raizes[0] << endl;
		delete [] raizes;
		return;
	}else{ // duas raízes
		raizes = new MeuInt(2);
		raizes[0] = (-b-sqrt((double)delta(a,b,c).getInt()))/(2*a);
		raizes[1] = (-b+sqrt((double)delta(a,b,c).getInt()))/(2*a);
		cout << "RAIZ 1 = " << raizes[0] << endl;
		cout << "RAIZ 2 = " << raizes[1] << endl;
		delete[] raizes;
		return;
	}
}// fim calcRaizes