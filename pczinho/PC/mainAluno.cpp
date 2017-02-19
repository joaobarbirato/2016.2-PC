/*
Alunos:
	Bruna Magalh„es
	Gabrieli Santos
	Jo„o Barbirato
	Leonardo Peralta
*/

#include <iostream>
#include <new> // usar new
#include "mainAluno.h"

int Aluno::URA = 9999;

// M√©todos

// Objetivo: inicializar o objeto
// n - nome
// nNotas - n√∫mero de notas
Aluno::Aluno(string n = "Jo„o Victor", int nNotas = 0) :RA(++URA) {
    int i;
	nome = n;
	quantNotas = nNotas;
    ptrNotas = new double [quantNotas];
    for(i=0;i<quantNotas;i++)
        ptrNotas[i]=0;
}; // fim construtor
// Objetivo: inicializar o objeto
Aluno::Aluno():RA(++URA) {
    quantNotas=0;
	cout << "CriaÁ„o do vetor alunos realizada com sucesso" << endl << endl;

}; // fim construtor
// Objetivo: mudar o nome do objeto
// n - nome
bool Aluno::setNome(string n){
	if ( n != "" ){
		nome = n;
		return true;
	}
	return false;
}; // fim setNome

// Objetivo: mudar nota de acordo com sua posi√ß√£o no vetor de notas
//           ( notas de 0 a 100 )
bool Aluno::setNota(int posicao, double nota){
	if( (nota >= 0 && nota <= 100) && (posicao >= 0 && posicao < quantNotas) ){
		ptrNotas[posicao] = nota;
		return true;
	}
	return false;
}; // fim setNota

void Aluno::setQuantNotas(int nNota=1) {
    int i;
    URA=RA;
    quantNotas=nNota;
    delete [] ptrNotas;
    ptrNotas = new double [nNota];
    for(i=0;i<nNota;i++)
        ptrNotas[i]=0;
}

// Objetivo: obter o nome do objeto
string Aluno::getNome() const{
	return nome;
}; // fim getNome

// Objetivo: obter a nota num vetor fornecendo a posi√ß√£o no vetor
bool Aluno::getNota(int posicao,double & nota) {
	if (posicao < quantNotas && 0 <= posicao){
		nota = ptrNotas[posicao];
		return true;
	}
	return false;
}; // fim getNota

int Aluno::getUltimoRA(){
	return URA;
};

int Aluno::getQuantNotas() const{
	return quantNotas;
};
int Aluno::getRa() const{
	return RA;
};

void Aluno::mostrarAluno()const{
    int i;

    cout << "RA: " << RA << endl;
    cout << "Nome: " << nome << endl;
    cout << "Quantidade de notas: " << quantNotas << endl;
    cout << "Notas:" << endl;
    for(i=0;i<quantNotas;i++)
        cout << "Nota " << i+1 << ": " << ptrNotas[i] << endl;
}
// Destrutor
Aluno::~Aluno(){
	delete[] ptrNotas;
}; // fim destrutor
