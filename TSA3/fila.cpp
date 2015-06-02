#include <iostream>
using namespace std;

class Lista{

public:
    struct No {
        int tamanho;
        long int *endereco;
        No *proximo;
    };

    Lista(){
        cabeca = NULL;
    }

    void empilhar(int val){
        No *n = new No();
        n->endereco = new long int[val];
        n->tamanho = val;
        n->proximo = cabeca;
        cabeca = n;
    }

    void desempilhar(){
        No *n = cabeca;
        int valor = n->tamanho;
        delete n->endereco;

        cabeca = cabeca->proximo;
        delete n;
    }

    int consultar(){
        No *n = cabeca;
        int valor = n->tamanho;
        return valor;
    }

    No *cabeca;
};

int main() {
    Lista lista;

    int valor = 0;
    int menu=0;

  do{

    cout << endl << endl<< "==== MENU ===" << endl;
    cout << "1. Empilhar" << endl;
    cout << "2. Desempilhar" << endl;
    cout << "3. Consultar" << endl;
    cout << "0. Sair" << endl;

    cin >> menu;

    switch(menu){
      case 0:
        cout << "Fim" << endl;
        break;
      case 1:
        cout << "Empilhar" << endl;
        cout << "Tamanho: ";
        cin >> valor;
        lista.empilhar(valor);
        cout << endl << "Empilhado com sucesso." << endl;
        break;
      case 2:
        lista.desempilhar();
        cout << endl << "Desempilhado com sucesso." << endl;
        break;
      case 3:
        cout << "Consultar" << endl;
        cout << "O elemento do topo é: " ;
        cout << lista.cabeca->endereco; 
        cout << " de tamanho " << lista.cabeca->tamanho << endl; 
        break;
      default:
        cout << "opção inválida" << endl;
        break;
    }
  } while(menu!=0);

    return 0;
}