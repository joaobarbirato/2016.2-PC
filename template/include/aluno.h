#ifndef ALUNO_H
#define ALUNO_H
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


#endif // ALUNO_H
