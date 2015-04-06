#include <iostream>
#include <string>
#include "ponto.h"
#include "funcoes.h"
#include <vector>

int main(int argc, char const *argv[]){

	string matriz[20][80];
	int tamanho = 10;

	for (int i = 0; i < 20; ++i){
		for (int j = 0; j < 80; ++j){
			matriz[i][j] = ".";
		}
	}

	vector<Ponto> ponto(tamanho);
	ponto[0] = Ponto(1,2);

	AdicionarPonto(matriz, ponto[0].x, ponto[0].y);

	ImprimeMatriz(matriz);



	return 0;
}