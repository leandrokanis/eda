/* Universidade de Brasília - Faculdade Gama
 * Estrutura de Dados e Algoritimos
 * Professor Nilton - Turma A
 * Aluno: Leandro Alves - 10/0110304
 * TSA2
 * Questão 1
 */


#include <iostream>
#include <stdio.h>
#include <string.h>
 
 
void Palindromo(char palavra[], int posicao = 0){
    int tamanho = strlen(palavra) - (posicao + 1);

    if (palavra[posicao] == palavra[tamanho]){
        if (posicao + 1 == tamanho || posicao == tamanho) {
            std::cout << "É palindromo" << std::endl;
            return;
        }
        Palindromo(palavra, posicao + 1);
    } else {
        std::cout << "Não é palindromo" << std::endl;;
    }
}


int main(int argc, char const *argv[]){
    
    char palavra[100];
 
    std::cout << "Escreva a palavra" << std::endl;
    std::cin >> palavra;
    Palindromo(palavra);
 
    return 0;
}