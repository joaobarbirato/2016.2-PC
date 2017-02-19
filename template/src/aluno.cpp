#include "aluno.h"

template <class T>
aluno<T>::aluno(string nome, int qtd) {
    this->nome_aluno = nome;
    this->qtd_notas = qtd;

    this->ptr_notas = new T[this->qtd_notas];
    this->notasInseridas = 0;
}

template <class T>
aluno<T>::~aluno() {
    delete []this->ptr_notas;
}

template <class T>
bool aluno<T>::setNotas(T value, int pos) {
    if (pos >= 0 && pos < this->qtd_notas) {
        this->ptr_notas[pos] = value;
        this->notasInseridas += 1;
        return true;
    }

    return false;
}

template <class T>
T aluno<T>::getNotas(int pos) {
    return this->ptr_notas[pos];
}

template <class T>
string aluno<T>::getNome() {
    return this->nome_aluno;
}

template <class T>
void aluno<T>::imprime(){
    cout << this->getNome() << endl;
    cout << "Notas: " << endl;
    for (int i=0; i < notasInseridas; i++) {
        cout << "Nota " << i << " " << this->ptr_notas[i] << endl;
    }
}
