#include <iostream>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include "vendedor.h"
#include "funcoes.h"
using namespace std;

int Tamanho(){
	int i=0;
	ifstream arquivo("MovimentoVendas.txt");
	while(arquivo){
		string linha;
		getline(arquivo, linha);
		i++;
	}
	return i-1;
}

// Pega valores do arquivo e joga no vetor
void PegarValores(vector<Vendedor> &vendedor){
	ifstream arquivo("MovimentoVendas.txt");
	int i=0;
	int tamanho = Tamanho();
		for(i=0; i <= tamanho; i++){
				arquivo >> vendedor[i].codigo;
				arquivo >> vendedor[i].salarioBase;
				arquivo >> vendedor[i].valorDeVendas;	
		}
}

double MediaVendas(vector<Vendedor> &vendedor){
	double media = 0;
	int tamanho = Tamanho();
	for (int i = 0; i < tamanho; ++i){
		media += vendedor[i].valorDeVendas;
	}
	return media/Tamanho();
}

void CalcularComissao(vector<Vendedor> &vendedor){
	double media = MediaVendas(vendedor);
	int tamanho = Tamanho();
	for (int i = 0; i < tamanho; ++i){
		if(vendedor[i].valorDeVendas <= media){
			vendedor[i].comissao = vendedor[i].valorDeVendas*3/100;
			vendedor[i].salarioFinal = vendedor[i].salarioBase + vendedor[i].comissao;
		} else {
			vendedor[i].comissao = vendedor[i].valorDeVendas*5/100;
			vendedor[i].salarioFinal = vendedor[i].salarioBase + vendedor[i].comissao;
		}
	}
}



int *Ordenar(vector<Vendedor> &vendedor, int vetor[]){
	
	int n = Tamanho(), ordem[n];
	for (int i = 0; i < n; ++i){
		vetor[i] = vendedor[i].codigo;
		ordem[i] = vendedor[i].codigo;
	}

	int j,i,key;
	for(j = 1; j < n; j++){
      key = vetor[j];
      i = j - 1;
      while(i >= 0 && vetor[i] > key){
         vetor[i + 1] = vetor[i];
         i = i - 1;
      }
      vetor[i + 1] = key;
   	}

   	for (int i = 0; i <= Tamanho(); ++i){
   		for (int j = 0; j <= Tamanho(); ++j){
   			if(vetor[i] == ordem[j]){
   				vetor[i] = j;
   				break;
   			}
   		}
   	}

   	return vetor;
}

void Gravar(vector<Vendedor> &vendedor){
	ofstream saida("saida.txt");
	int tamanho = Tamanho();

	int vetor[tamanho];
	int *a = Ordenar(vendedor, vetor);

	for (int i = 0; i < tamanho; ++i){
		saida  << vendedor[a[i]].codigo;
		saida  << " " << vendedor[a[i]].salarioBase;
		saida  << " " << vendedor[a[i]].valorDeVendas;
		saida  << " " << vendedor[a[i]].comissao;
		saida  << " " << vendedor[a[i]].salarioFinal << endl;
	}
}
	
int main(int argc, char const *argv[]){
	int tamanho;
	double media;
	tamanho = Tamanho();
	vector<Vendedor> vendedor(tamanho);
	
	PegarValores(vendedor);

	CalcularComissao(vendedor);

	Gravar(vendedor);

	return 0;
}