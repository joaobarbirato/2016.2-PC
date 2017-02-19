#include <iostream>

using namespace std;

template <class T>
class aluno
{
    public:
        aluno(string = "Gilberto", int = 3);
        ~aluno();
        bool setNotas(T, int);
        T getNotas(int);
        string getNome();
        void imprime();

    private:
        string nome_aluno;
        int qtd_notas;
        T *ptr_notas;
        int notasInseridas;
};

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



int main(){
    int qtd = 5;
    aluno<float> a1("Gilberto de verdade", qtd);
    for (int i = 0; i < qtd; i++) {
        float aux;
        cout << "Insira a nota " << i << endl;
        cin >> aux;
        a1.setNotas(aux, i);
    }

    cout << "Imprimindo aluno" << endl;
    a1.imprime();

    return 0;
}
