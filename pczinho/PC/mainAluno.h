/*
Alunos:
	Bruna Magalhães
	Gabrieli Santos
	João Barbirato
	Leonardo Peralta
*/

#ifndef mainAluno_h
#define mainAluno_h
#include <string>

using namespace std;

class Aluno{

	private:
		const int RA;
		string nome;
		int quantNotas;
		double *ptrNotas;
		static int URA;

	public:
		Aluno(string, int nNotas);
		Aluno();
		~Aluno();
		bool setNome(string);
		string getNome() const;
		int getRa() const;
		void setQuantNotas(int) ;
		int getQuantNotas() const;
		bool setNota(int posicao, double nota);
		bool getNota(int posicao, double & nota);
		static int getUltimoRA();
		void mostrarAluno() const;
};


#endif
