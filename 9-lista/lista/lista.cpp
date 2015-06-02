#include <iostream>
using namespace std;

class Lista{

    struct No {
        int x;
        No *proximo;
    };

public:
    Lista(){
        cabeca = NULL;
    }

    void empilhar(int val){
        No *n = new No();
        n->x = val;
        n->proximo = cabeca;
        cabeca = n;
    }

    int desempilhar(){
        No *n = cabeca;
        int valor = n->x;

        cabeca = cabeca->proximo;
        delete n;
        return valor;
    }

private:
    No *cabeca;
};

int main() {
    Lista lista;

    lista.empilhar(5);
    lista.empilhar(10);
    lista.empilhar(20);

    cout << lista.desempilhar() << endl;
    cout << lista.desempilhar() << endl;
    cout << lista.desempilhar() << endl;
    return 0;
}