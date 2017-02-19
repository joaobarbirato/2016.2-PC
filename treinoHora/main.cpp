#include <iostream>
#include "hora.h"

using std::cout;
using std::cin;
using std::endl;

istream & operator>>(istream &, hora &);
ostream & operator<<(ostream & , const hora);

int main(){
	hora myhora(10,43,10);

	cout << myhora << endl;

	cin >> myhora;
/*
	myhora.setH(11);
	myhora.setM(48);
	myhora.setS(22);
*/
	cout << myhora << endl;

	return EXIT_SUCCESS;
}

ostream & operator<<(ostream & saida, const hora x){
	saida << x.getH() << "h " << x.getM() << "min " << x.getS() << "s" << endl;
	return saida;
};

istream & operator>>(istream & entrada, hora & x){
	int vh, vm, vs;
	entrada >> vh;
	entrada.ignore();
	entrada >> vm;
	entrada.ignore();
	entrada >> vs;
	x.setH(vh), x.setM(vm), x.setS(vs);
	return entrada;
};