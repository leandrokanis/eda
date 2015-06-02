#include <iostream>
using namespace std;

struct No
{
    int data;
    No *proximo;
};
int contador = 0;

class fila{
    No *calda;
public:
    fila(){
        calda=NULL;
    }

    void inserir(int data){
        if(contador >= 5){
            cout << "fila cheia" << endl;
        } else {
            No *p=new No;
            p->data=data;
            if(calda==NULL){
                calda=p;
                calda->proximo=p;
            }
            else{
                p->proximo=calda->proximo;
                calda->proximo=p;
                calda=p;
            }
            contador++;
        }
    }

    void del(){
        if(calda==NULL)
            cout<<"fila Empty";
        else{
            No *t=calda->proximo;
            cout<<"The element to be deleted is"<<calda->proximo->data;
            if(calda==t)
                calda=NULL;
            else
            {
                calda->proximo=t->proximo;
                delete t;
            }
            contador--;
        }
    }

    void display()
    {
        No *t=calda;
        if(calda==NULL)
            cout<<"fila Empty";
        else
        {
            do
            {
                t=t->proximo;
                cout<<t->data<<" ";
            }while(t!=calda);
        }
    }
};

int main(int argc, char const *argv[]){
    //clrscr();
    fila q;
    int data,option;
    while(1)
    {
        cout<<"\n 1.inserir \n 2.Delete \n 3.Display\n 4.Exit\n Enter your Option";
        cin>>option;
        switch(option)
        {
            case 1:
                    cout<<"\nEnter the element to be inserired";
                    cin>>data;
                    q.inserir(data);
                    break;
            case 2:
                    q.del();
                    break;
            case 3:
                    q.display();
                    break;
            case 4:
                    break;
        }
    }
    return 0;
}