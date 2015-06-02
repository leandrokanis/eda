/* Universidade de Brasília - Faculdade Gama
 * Estrutura de Dados e Algoritimos
 * Professor Nilton - Turma A
 * Aluno: Leandro Alves - 10/0110304
 * TSA2
 * Questão 2
 */

#include <iostream>
#include <ctime>
#include <math.h> 
using namespace std;

double T(double n){
	if(n <= 1){
		return 1;
	} else {
		return T(n/2.0) + sqrt(n);
	}
}

int main(){
	double numero;
	cout << "Escreva numero: ";
    cin >> numero;
    cout << T(numero) << endl;
    return 0;
}
