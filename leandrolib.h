#include <stdlib.h>
#include <iostream>
#include <stdio.h>
using namespace std;


// i/o
char *LerString(char *pmensa, int ptamanho){
  char *pdado;
  pdado = (char*) malloc(ptamanho);
  printf("%s", pdado);
  return pdado;
}

int LerInteiro(const char *pmensa){
  int pdado=0;
  printf("%s \n", pmensa);
  scanf ("%d", &pdado);
  return pdado;
}
/*
double LerDouble(char *pmensa){
  double pdado;
  printf("%s \n", pmensa);
  scanf("%lf, &pdado");
  return pdado;
}*/

void MostraString(const char *pmensa, const char *pdado){
  printf("%s ", pmensa);
  printf("%s \n", pdado);
}

void MostraInteiro(const char *pmensa, int pdado){
  printf("%s ", pmensa);
  printf("%d \n", pdado);
}


void MostraFloat(char *pmensa, double pdado){
  printf("%s ", pmensa);
  printf("%lf \n", pdado);
}
