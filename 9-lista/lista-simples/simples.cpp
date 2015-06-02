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

    bool Vazia(No *pLista){
        if(pLista == NULL)
            return true;
        else
            return false;
    }

    
    

private:
    No *cabeca;
};

int main() {
    Lista lista;
    return 0;
}