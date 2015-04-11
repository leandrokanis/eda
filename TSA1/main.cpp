#include <iostream>
#include <vector>
#include "vendedor.h"
#include "funcoes.h"
using namespace std;

	// abrir arquivo
	// escrever valores nos objetos
	// calcular comissoes
	// ordenar vendedores
	// 	- criar um vetor simples com a ordem
	// escrever no arquivo

int Tamanho(){
	return 10;
}

Vendedor PegarValores(vector<Vendedor> vendedor){
	int i=0;
	vendedor[i] = Vendedor(1, 2, 3);
	return vendedor[i];
}
	
int main(int argc, char const *argv[]){
	int tamanho;
	tamanho = Tamanho();
	vector<Vendedor> vendedor(tamanho);

	vendedor[0] = PegarValores(vendedor);

	//vendedor[0] = Vendedor(0, 123, 234);

	cout << vendedor[0].codigo << vendedor[0].salarioBase << vendedor[0].valorDeVendas;


	return 0;
}