/*
Alunos:
	Bruna Magalhães
	Gabrieli Santos
	João Barbirato
	Leonardo Peralta
*/

#include <iostream>
#include <stdlib.h>
#include "mainAluno.h"
#include <string>
using namespace std;
#define tam 5
int main(){
    Aluno *alunos= new Aluno[tam];
    int indice=0;
    string nome;
    bool cadastroConcluido=false;
    int i,j,opcao,nNota,ra;
    double nota;
    int quantNotas;

    do{
        system("cls");
        cout << "1 - Cadastrar aluno." << endl;
        cout << "2 - Excluir aluno." << endl;
        cout << "3 - Exibir alunos." << endl;
        cout << "4 - Mostrar ultimo RA." << endl;
        cout << "0 - Sair." << endl;
        cout << "Digite a opção desejada:" << endl;
        cin >> opcao;

        switch (opcao){

            case 1:

                if(indice<tam-1){
                    while(!cadastroConcluido){
                        cout << "Digite o nome do aluno: "<< endl;
                        cin >> nome;
                        cout << "Digite a quantidade de notas do aluno :"<< endl;
                        cin >> quantNotas;
                        while(alunos[indice].getQuantNotas()!=0)
                            indice++;
                        alunos[indice].setQuantNotas(quantNotas);
                        cadastroConcluido = alunos[indice].setNome(nome);
                    }
                    do{
                     cout << "Deseja inserir as notas ? (1-Sim,0-Nao) "<< endl;
                     cin >> cadastroConcluido;
                     if(cadastroConcluido){
                        cout << "Digite o numero da nota (1,...,n): "<< endl;
                        cin >> nNota;
                        cout << "Digite o valor da nota :"<< endl;
                        cin >> nota;
                        alunos[indice].setQuantNotas(nNota);
                        if(alunos[indice].setNota(nNota-1,nota))
                           cout << "Nota computada "<< endl;
                     }
                    }while(cadastroConcluido);
                    cadastroConcluido= false;
                    indice++;
                }
                break;
            case 2:
                cout << "Digite o RA do aluno que deseja excluir:"<< endl;
                cin >> ra;
                for(i=0;i<indice;i++){
                    if(ra==alunos[i].getRa()){
                            alunos[i].setQuantNotas(0);
                            indice=i;
                        break;
                    }else{
                        if(i==indice-1)
                            cout << "Aluno não encontrado."<< endl;
                    }

                }
                system("pause");
                break;
            case 3:
                for(i=0;i<tam;i++){
                    if(alunos[i].getQuantNotas()!=0){
                        cout << "Aluno "<< i+1 << ": " << endl;
                        alunos[i].mostrarAluno();
                    }
                }
                system("pause");
                break;
            case 4:
                if(indice !=0)
                    cout << "RA do ultimo aluno cadastrado: "<< alunos[0].getUltimoRA() << endl;
                else
                    cout << "Nenhum aluno cadastrado"<< endl;
                system("pause");
                break;
            default:
                if(opcao!=0)
                    cout << "Opção não disponivel"<< endl;
                break;

        }
    }while(opcao != 0);
        delete[] alunos;

	return 0;
}
