#include <stdlib.h>
#include <stdio.h>

// i/o
char *LerString(char *pmensa, int ptamanho){
  char *pdado;
  pdado = (char*) malloc(ptamanho);
  printf("%s", pdado);
  return pdado;
}

int LerInteiro(char *pmensa){
  int pdado;
  printf("%s \n", pmensa);
  scanf ("%d", &pdado);
  return pdado;
}

double LerFloat(char *pmensa){
  double pdado;
  printf("%s \n", pmensa);
  scanf("%lf, &pdado");
  return pdado;
}

void MostraString(char *pmensa, char *pdado){
  printf("%s ", pmensa);
  printf("%s \n", pdado);
}

void MostraInteiro(char *pmensa, int pdado){
  printf("%s ", pmensa);
  printf("%d \n", pdado);
}


void MostraFloat(char *pmensa, double pdado){
  printf("%s ", pmensa);
  printf("%lf \n", pdado);
}
