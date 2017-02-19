#include <iostream>
#include "Triangulo.h"
#include "Circulo.h"
#include "Quadrado.h"
#include "Retangulo.h"
#include "Losango.h"
#include "time.h"

using std::cout;
using std::endl;

const int tam = 10; // tamanho base do campo

//protótipos
void DisplayRefresh(Figura **vetor, char matriz[tam][tam]);
void pause(time_t delay);
void nenhumaForma();
void preencheMatriz(char matriz[tam][tam]);
void printFormas(char matriz[tam][tam]);
void varreVetor(Figura **vetor, char matriz[tam][tam]);

int main() {

	srand(time(NULL));// otimização de random com o tempo da máquina

	char campo[tam][tam];
	preencheMatriz(campo);
	Figura* vetor[5] = {NULL};// declaração do vetor de Figuras
	
	// instancianção dos objetos de Figura
	vetor[0] = new Triangulo(2, 1, 1); //1
	vetor[1] = new Circulo(2, 3, 4); //2
	vetor[2] = new Quadrado(2, 7, 2); //3
	vetor[3] = new Retangulo(2, 5, 10, 2); //4
	vetor[4] = new Losango(2, 4, 6); //5

	// desenha na tela
	DisplayRefresh(vetor, campo);

	for(int i=0; i<5; i++)
		if(vetor[i]!=NULL)
			delete vetor[i]; // desalocar memória

	return EXIT_SUCCESS;
};

// Função pedida no enunciado
// vetor - vetor de figuras
// matriz- campo de impressão no terminal
void DisplayRefresh(Figura **vetor, char matriz[tam][tam]){
	const int repeticoes = 10;
	int auxX, auxY; // variáveis auxiliares do random
	for(int nPrints=0;nPrints<repeticoes;nPrints++){
		for (int i=0;i<5;i++){
			auxX = rand() % 10;
			auxY = rand() % 10;
			if(matriz[auxX][auxY] == '-')
				vetor[i]->setPosicao(auxX, auxY);
			else
				i--;
		} // gerar random
		varreVetor(vetor, matriz); // função de varedura
		system("clear || cls"); // limpar a tela
		printFormas(matriz); // ímprimir na tela
		pause(1);
		preencheMatriz(matriz); //limpar a matriz
	}
}; // fim DisplayRefresh

// Função de espera
// delay - segundos de espera
void pause(time_t delay) {
	time_t timer0, timer1;
	time(&timer0);

	do {
		time(&timer1);
	} while ((timer1 - timer0) < delay);
};// fim pause

// Função de inicializar matriz
// matriz - campo de impressão no terminal
void preencheMatriz(char matriz[tam][tam]){
	for(int j=0;j<tam;j++)
		for(int i=0;i<tam;i++)
			matriz[i][j] = '-';
};// fim preencheMatriz

// Função para varrer o vetor de formas e armazenar informações no campo.
// vetor - vetor de formas
// matriz- campo de impressão no terminal
void varreVetor(Figura **vetor, char matriz[tam][tam]){
	bool imprimiuFigura = false;
	for (int x = 0; x < tam; x++)
		for (int y = 0; y < tam; y++)
			for (int f = 0; f < 5; f++) // varredura do vetor
				if (vetor[f]->getX() == x && vetor[f]->getY() == y)
					matriz[x][y] = vetor[f]->desenhar();
};// varreVetor

// Função de impressão de acordo com o campo.
// matriz - campo de impressão
void printFormas(char matriz[tam][tam]){
	for(int i=0;i<tam;i++) // linha
		for(int x=0;x<5;x++){ // linhas dentro
			for(int j=0;j<tam;j++){ // coluna
				switch(matriz[i][j]){
					case '-':
						cout << "- - - - - ";
						break;
					case 'T': // TRIANGULO
						switch(x){ 
							case 0:
								cout << "@ - - - - ";
								break;
							case 1:
								cout << "@ @ - - - ";
								break;
							case 2:
								cout << "@ @ @ - - ";
								break;
							case 3:
								cout << "@ @ @ @ - ";
								break;
							default:
								cout << "@ @ @ @ @ ";
								break;
						}
						break;
					case 'C': // Circulo
						switch(x){ 
							case 0:
							case 4:
								cout << "- -@ @- - "; 
								break;
							case 1:
							case 3:
								cout << "-@ @ @ @- ";
								break;
							case 2:
								cout << "@ @ @ @ @ ";
								break;
						}
						break;
					case 'Q': // Quadrado
						cout << "@ @ @ @ @ ";
						break;
					case 'R': // Retangulo
						cout << "@ @ @ - - ";
						break;
					case 'L': // Losango
						switch(x){ 
							case 0:
							case 4:
								cout << "- - @ - - ";
								break;
							case 1:
							case 3:
								cout << "- @ @ @ - ";
								break;
							case 2:
								cout << "@ @ @ @ @ ";
								break;
						}
						break;
				}
			}
			cout << endl;
		}
}