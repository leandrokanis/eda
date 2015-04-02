#include <iostream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

class Funcionario{
	public:
		int codigo;
		string nome;
		int idade;
		float altura;
	
	// construtor
	Funcionario(int codigo=0, string nome="", int idade=0, float altura=0){
		this->codigo = codigo;
		this->nome = nome;
		this->idade = idade;
		this->altura = altura;
	}
};


void Adicionar(Funcionario *funcionario, int codigo, string nome, int idade, float altura){
	funcionario[codigo].idade = idade;
	funcionario[codigo].nome = nome;
	funcionario[codigo].altura = altura;
}


void Excluir(Funcionario *funcionario, int codigo){
	funcionario[codigo].nome = "";
	funcionario[codigo].idade = 0;
	funcionario[codigo].altura = 0;
}

int Menu(){
	int menus;
			cout << "1. Adicionar: " << endl;
			cout << "2. Editar: " << endl;
			cout << "3. Excluir: " << endl;
			cout << "4. Listar: " << endl;
	cin >> menus;
	return menus;
}


int main(int argc, char const *argv[]){
	int menu=0;

	Funcionario funcionario[3];

	
	do{
		menu = Menu();
		switch(menu){

		case 1:
			Adicionar(funcionario, 1, "leandro", 23, 2);
			break;
		case 2:
			break;
		case 3:
			Excluir(funcionario, 1);
			break;
		case 4:
			break;
			cout << funcionario[1].nome << endl;
			cout << funcionario[1].altura << endl;
			cout << funcionario[1].idade << endl;
		case 5:
			cout << "5. Sair: ";
			break;
		default:
			menu = 0;
			break;
		}
	} while(menu != 0);



	return 0;
}