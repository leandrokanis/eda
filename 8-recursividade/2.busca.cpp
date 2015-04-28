#include <iostream>

int busca(char texto[], char alvo[], int posicao=0){
  std::cout << texto[posicao] << std::endl;
  if (texto[posicao] == alvo[0]) {
    return posicao;
  } else if (texto[posicao] == '\0') {
    return -1;
  } else {
    return busca(texto, alvo, posicao + 1);
  }
}

int main(int argc, const char *argv[]){
  char *texto = new char[100];
  char *alvo = new char[1];
  texto = "leandro";
  alvo = "j";

  int num = busca(texto, alvo);
  std::cout << num << std::endl;
  return 0;
}