#include <iostream>
using namespace std;

int somar(int numa, int numb){
	return numa + numb;
}

int subtrair(int numa, int numb){
	return numa - numb;
}

int multiplicar(int numa, int numb){
	return numa * numb;
}

int dividir(int numa, int numb){
	return numa / numb;
}

int resto(int numa, int numb){
	return numa % numb;
}

int menu(){
	int opcao;
	cout << "Selecione uma opção" << endl;
	cout << "1. somar" << endl;
	cout << "2. subtrair" << endl;
	cout << "3. multiplicar" << endl;
	cout << "4. dividir" << endl;
	cout << "5. resto" << endl;
	cin >> opcao;
	return opcao;
}

int main(int argc, char const *argv[]){	
	int numa = 14, numb = 4;

	int (*conta)(int x, int z);

	switch(menu()){
		case 1:
			conta = somar;
			break;
		case 2:
			conta = subtrair;
			break;
		case 3:
			conta = multiplicar;
			break;
		case 4:
			conta = dividir;
			break;
		case 5:
			conta = resto;
			break;
	}

	cout << conta(numa, numb) << endl;
	
	return 0;
}