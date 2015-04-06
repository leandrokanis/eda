#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include "ponto.h"
#include "linha.h"
#include "funcoes.h"

int main(int argc, char const *argv[]){

	string matriz[20][80];
	int tamanho = 10;

	// inicializa matriz
	for (int i = 0; i < 20; ++i){
		for (int j = 0; j < 80; ++j){
			matriz[i][j] = ".";
		}
	}

	vector<Ponto> ponto(tamanho);
	ponto[0] = Ponto(1,50);
	ponto[1] = Ponto(10,50);

	Linha linha = Linha(ponto[0], ponto[1]);

	AdicionarLinha(matriz, ponto[0], ponto[1]);

	//AdicionarPonto(matriz, ponto[0]);
	//AdicionarPonto(matriz, ponto[1]);

	ImprimeMatriz(matriz);

	return 0;
}