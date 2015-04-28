#include <iostream>
#include <string.h>

char *inverte(char palavra[], int n=0){
  char *p = new char[1];
  size_t tamanho = strlen(palavra);
  
  if (palavra[n] = tamanho/2 ) {
    return palavra;
  } else {
    p = &palavra[n];
    palavra[n] = palavra[tamanho - n];
    std::cout << "alsjdflakjs" << p;
    return inverte(palavra, n+1);
  }
}

int main(int argc, const char *argv[]){
  char *word = new char[100];
  char *asdf = new char[100];
  word = (char *)"leandroasdfasdfasfa";
  asdf = inverte(word);

  std::cout << asdf;
  delete[] word, asdf;
  return 0;
}
