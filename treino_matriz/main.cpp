#include <iostream>
#include "matriz.h"

using std::cout;
using std::endl;
using std::ostream;

void printTam(const Matriz & x);
ostream & operator<<(ostream & saida, Matriz & x);

int main(){
	Matriz A(3,3);
	Matriz B(3,3);
	Matriz C(3,3);

	cout << A << endl;

	A.setEle(1,0,2);

	C = A+B;

	cout << C << endl;

	return EXIT_SUCCESS;
}

// métodos classes friend
ostream & operator<<(ostream & saida, Matriz & x){
	for(int i=0; i < x.getnLin(); i++){
		for(int j=0; j < x.getnCol(); j++){
			saida << x.getEle(i,j) << " ";
			if(j == x.getnCol()-1)
				saida << endl;
		}
	}
	return saida;
};

// funções
void printTam(const Matriz & x){
	cout << x.getnLin() << " x " << x.getnCol() << endl;
};
