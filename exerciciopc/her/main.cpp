#include <iostream>
#include "cilindro.h"

void printPonto(Ponto);
void printCir(Circulo);
void printCil(Cilindro);

using std::cout;
using std::endl;

// principal
int main() {
    // teste do ponto
    Ponto P1(11, 22);
    printPonto(P1);
    P1.setx(10);
    P1.sety(10);
    printPonto(P1);
 
    // teste do cilindro
    Circulo C1(20, 14, 5);
    printCir(C1);
    C1.setRaio(6);
    printCir(C1);
 
    // teste do cilindro
    Cilindro cil1(14, 12, 30, 10);
    printCil(cil1);
    cil1.setx(10);
    cil1.sety(3);
    cil1.setRaio(8);
    cil1.setAltura(12);
    printCil(cil1);
   
    return 0;
}

// procedimentos/funções
void printPonto(Ponto p){
    cout << "Ponto = (" << p.getx() << ", " << p.gety() << ")" << endl;
    cout << endl;
}

void printCir(Circulo p){
    cout << "Circulo\n";
    cout << "Centro = (" << p.getx() << ", " << p.gety() << ")" << endl;
    cout << "Raio = " << p.getRaio() << endl;
    cout << "Area = " << p.getArea() << endl;
    cout << "Circunferencia = " << p.getCircunferencia() << endl;
    cout << endl;
}

void printCil(Cilindro p){
    cout << "Cilindro\n";
    cout << "Raio = " << p.getRaio() << endl;
    cout << "Altura = " << p.getAltura() << endl;
    cout << "Volume = " << p.getVolume() << endl;
    cout << endl;
}