#include <iostream>
#include "Cachorro.h"
#include "Siames.h"
using namespace std;

void falaAnimal(Animal * a);
void oi(Animal ** a);

int main(){
	system("clear");
/*
	Animal * zoo[100] = {NULL};

	zoo[0] = new Cachorro("Jao", 10);
	zoo[1] = new Gato("dr. oppenheimer", 0);
	zoo[2] = new Siames("whiskers", 0, 0);


	oi(zoo);


	for(int i=0; i<100; i++)
		if(zoo[i]!=NULL)
			falaAnimal(zoo[i]);

	for(int i=0; i<100; i++)
		if(zoo[i]!=NULL)
			delete zoo[i];
*/

	Animal * teste = new Gato("dr. oppenheimer", 0);
	teste->cairDePe();


//	Cachorro c1("Rex");
//	p1->emitirSom();
//	p1->getNome();

//	falaAnimal(&c1);

	return EXIT_SUCCESS;
}
void falaAnimal(Animal * a){ a->emitirSom();};
void oi(Animal ** a){
	cout << "TADAIMAAAA" << endl;
	for(int i=0; i< 100; i++){
		cout << a[i]->getNome() << endl;
		a[i]->emitirSom();
	}
}