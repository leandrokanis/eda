#include<iostream>
#include<cstdio>
#include <string>
#include<cstdlib>
using namespace std;


struct No
{
    int codigo;
    string nome, telefone;
    struct No *proximo;
    struct No *anterior;
}*inicio, *fim;
int contador = 0;


class lista_circular{
    public:
        No *criar_no(int, string, string);
        void inserir_inicio();
        void inserir_fim();
        void inserir_posicao();
        void deletar_posicao();
        void atualizar();
        void mostrar();
        lista_circular(){
            inicio = NULL;
            fim = NULL;			
        }
};
 

int main()
{
    int menu;
    lista_circular cdl;
    while (1)
    {
        cout<<"\n-------------------------------"<<endl;
        cout<<"Operations on Doubly Circular linked list"<<endl;
        cout<<"\n-------------------------------"<<endl;         
        cout<<"1.Insert at Beginning"<<endl;
        cout<<"2.Insert at fim"<<endl;
        cout<<"3.Insert at Position"<<endl;
        cout<<"4.Delete at Position"<<endl;
        cout<<"5.atualizar No"<<endl;
        cout<<"8.mostrar List"<<endl;
        cout<<"10.Exit"<<endl;
        cout<<"Enter your menu : ";
        cin>>menu;
        switch(menu)
        {
        case 1:
            cdl.inserir_inicio();
            break;
        case 2:
            cdl.inserir_fim();
            break;   
        case 3:
            cdl.inserir_posicao();
            break; 
        case 4:
            cdl.deletar_posicao();
            break;
        case 8:
            cdl.mostrar();
            break;
        case 10:
            exit(1); 
        default:
            cout << "Valor invalido" << endl;	
        }
    }
    return 0;
}
 

No* lista_circular::criar_no(int value, string nome, string telefone){
    contador++;  
    struct No *temp;
    temp = new(struct No);
    temp->codigo = value;
    temp->nome = nome;
    temp->telefone = telefone;
    temp->proximo = NULL;
    temp->anterior = NULL;
    return temp;
}



void lista_circular::inserir_inicio(){
    int value;
    value = contador+1;
    string nome, telefone;
    cout << "Nome: ";
    cin >> nome;
    cout << "Telefone: ";
    cin >> telefone;
    struct No *temp;
    temp = criar_no(value, nome, telefone);
    if (inicio == fim && inicio == NULL)
    {    
        cout<<"Element inserted in empty list"<<endl;
        inicio = fim = temp;
        inicio->proximo = fim->proximo = NULL;
        inicio->anterior = fim->anterior = NULL;
    }
    else
    {
        temp->proximo = inicio;
        inicio->anterior = temp;
        inicio = temp;
        inicio->anterior = fim;
        fim->proximo = inicio;
        cout<<"Element inserted"<<endl;
    }
}
 

void lista_circular::inserir_fim(){
    int value;    
    value = contador+1;
    struct No *temp;
    string nome, telefone;
    cout << "Nome: ";
    cin >> nome;
    cout << "Telefone: ";
    cin >> telefone;
    temp = criar_no(value, nome, telefone);
    if (inicio == fim && inicio == NULL)
    {
        cout<<"Element inserted in empty list"<<endl;
        inicio = fim = temp;
        inicio->proximo = fim->proximo = NULL;    
        inicio->anterior = fim->anterior = NULL;
    }
    else
    {
        fim->proximo = temp;
        temp->anterior = fim;
        fim = temp;
        inicio->anterior = fim;
        fim->proximo = inicio;
    }
}

void lista_circular::inserir_posicao(){    
    int value, pos, i;
    value = contador+1;
    struct No *temp, *s, *ptr;
    string nome, telefone;
    cout << "Nome: ";
    cin >> nome;
    cout << "Telefone: ";
    cin >> telefone;
    cout<<endl<<"Posição a ser inserido: ";
    cin>>pos;
    temp = criar_no(value, nome, telefone);
    if (inicio == fim && inicio == NULL)
    {
        if (pos == 1)
        {
            inicio = fim = temp;
            inicio->proximo = fim->proximo = NULL;    
            inicio->anterior = fim->anterior = NULL;
        }
        else
        {
            cout<<"Posição não existe"<<endl;
            contador--;
            return;
        }
    }  
    else
    {
        if (contador < pos)
        {
             cout<<"Posição não existe"<<endl;
             contador--;
             return;   		
        }
        s = inicio;		
        for (i = 1;i <= contador;i++)
        {
            ptr = s;
            s = s->proximo;
            if (i == pos - 1)
            {
                ptr->proximo = temp;
                temp->anterior = ptr;
                temp->proximo = s;
                s->anterior = temp;
                cout<<"Element inserted"<<endl;
                break;
            }
        }
    }
}

void lista_circular::deletar_posicao(){    
    int pos, i;
    No *ptr, *s;
    if (inicio == fim && inicio == NULL)
    {
        cout<<"List is empty, nothing to delete"<<endl;
        return;
    }
    cout<<endl<<"Enter the postion of element to be deleted: ";
    cin>>pos;
    if (contador < pos)
    {
        cout<<"Posição não existe"<<endl;
        return;
    }
    s = inicio;
    if(pos == 1)
    {
        contador--;
        fim->proximo = s->proximo;
        s->proximo->anterior = fim;
        inicio = s->proximo;
        free(s);
        cout<<"Element Deleted"<<endl;
        return;	   
    }
    for (i = 0;i < pos - 1;i++ )
    {  
        s = s->proximo;
        ptr = s->anterior;    	  
    }    
    ptr->proximo = s->proximo;
    s->proximo->anterior = ptr;
    if (pos == contador)
    {
        fim = ptr; 	   
    }
    contador--;
    free(s);
    cout<<"Element Deleted"<<endl;
}

void lista_circular::mostrar(){
    int i;
    struct No *s;
    if (inicio == fim && inicio == NULL){
        cout<<"The List is empty, nothing to mostrar"<<endl;
        return;
    }
    s = inicio;
    for (i = 0;i < contador-1;i++)
    {	
        cout << s->codigo <<". Nome: " << s->nome << " - Telefone: " << s->telefone << endl;
        s = s->proximo; 
    }
        cout << s->codigo <<". Nome: " << s->nome << " - Telefone: " << s->telefone << endl;
}