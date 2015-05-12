// TSA1 - 1/2015
// Leandro Alves 10/011/3/4

#include <iostream>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include "cliente.h"
using namespace std; 

int Tamanho(){
	int i=0;
	ifstream arquivo("Clientes.txt");
	while(arquivo){
		string linha;
		getline(arquivo, linha);
		i++;
	}
	return i-2;
}

// Pega valores do arquivo e joga no vetor
void PegarValores(vector<Cliente> &cliente){
	ifstream arquivo("Clientes.txt");
	int i=0;
	int tamanho = Tamanho();

		string linha;
		getline(arquivo, linha);
		for(i=0; i <= tamanho; i++){
				arquivo >> cliente[i].matricula;
				arquivo >> cliente[i].idade;
				arquivo >> cliente[i].sexo;
				arquivo >> cliente[i].altura;
				arquivo >> cliente[i].peso;	
		}
}


void CalcularFaixaEtaria(vector<Cliente> &cliente){
	int tamanho = Tamanho();
	for (int i = 0; i < tamanho; ++i){
		if(cliente[i].idade <= 11)
			cliente[i].faixaEtaria = "Infantil";
		else if(cliente[i].idade >= 12 && cliente[i].idade <= 17)
			cliente[i].faixaEtaria = "Adolescente";
		else if(cliente[i].idade >= 18 && cliente[i].idade <= 24) 
			cliente[i].faixaEtaria = "Jovem";
		else if(cliente[i].idade >= 25 && cliente[i].idade <= 54) 
			cliente[i].faixaEtaria = "Adulto";
		else if(cliente[i].idade >= 55) 
			cliente[i].faixaEtaria = "Idoso";
	}
}
	
void CalcularIMC(vector<Cliente> &cliente){
	int tamanho = Tamanho();
	for (int i = 0; i < tamanho; ++i){
		cliente[i].imc = cliente[i].peso / (cliente[i].altura * cliente[i].altura);
	}
}

void AnalizarCondicao(vector<Cliente> &cliente){
	int tamanho = Tamanho();
	for (int i = 0; i < tamanho; ++i){

		// Mulheres
		if(cliente[i].sexo == "F"){
			if(cliente[i].imc < 19.1)
				cliente[i].condicao = "Abaixo do peso";
			else if(cliente[i].imc >= 19.1 && cliente[i].imc <= 25.8 )
				cliente[i].condicao = "No peso normal";
			else if(cliente[i].imc >= 25,8 && cliente[i].imc <= 27,3 )
				cliente[i].condicao = "Marginalmente acima do peso";
			else if(cliente[i].imc >= 27,3 && cliente[i].imc <= 32,3 )
				cliente[i].condicao = "Acima do peso ideal";
			else if(cliente[i].imc > 32.3)
				cliente[i].condicao = "Obeso";
		}

		// homens
		else if(cliente[i].sexo == "M"){
			if(cliente[i].imc < 20.7)
				cliente[i].condicao = "Abaixo do peso";
			else if(cliente[i].imc >= 20.7 && cliente[i].imc <= 26.4 )
				cliente[i].condicao = "No peso normal";
			else if(cliente[i].imc >= 26.4 && cliente[i].imc <= 27.8 )
				cliente[i].condicao = "Marginalmente acima do peso";
			else if(cliente[i].imc >= 27.8 && cliente[i].imc <= 31.1 )
				cliente[i].condicao = "Acima do peso ideal";
			else if(cliente[i].imc > 31.1)
				cliente[i].condicao = "Obeso";
		}

	}
}

int *Ordenar(vector<Cliente> &cliente, int vetor[]){
	
	int n = Tamanho(), ordem[n];
	for (int i = 0; i < n; ++i){
		vetor[i] = cliente[i].matricula;
		ordem[i] = cliente[i].matricula;
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

void Gravar(vector<Cliente> &cliente){
	ofstream saida("AnaliseIMC.txt");
	int tamanho = Tamanho();

	int vetor[tamanho];
	int *a = Ordenar(cliente, vetor);

	for (int i = 0; i < tamanho; ++i){
		saida  << cliente[a[i]].matricula;
		saida  << " " << cliente[a[i]].faixaEtaria;
		saida  << " " << cliente[a[i]].sexo;
		saida  << " " << cliente[a[i]].imc;
		saida  << " " << cliente[a[i]].condicao << endl;
	}
}
	
int main(int argc, char const *argv[]){
	int tamanho;
	double media;
	tamanho = Tamanho();
	vector<Cliente> cliente(tamanho);

	ifstream arquivo("Clientes.txt");
	ofstream saida("AnaliseIMC.txt");
	
	PegarValores(cliente);

	CalcularFaixaEtaria(cliente);

	CalcularIMC(cliente);

	AnalizarCondicao(cliente);

	Gravar(cliente);

	return 0;
}