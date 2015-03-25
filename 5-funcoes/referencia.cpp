#include <iostream>
#include <stdlib.h>
#include <stdio.h>

void ordena(int *N1, int *N2, int *N3){
	int troca = 0;

	if (N1 < N2){
		troca = *N1;
		*N1 = *N2;
		*N2 = troca;
	} if (N2 < N3){
		troca = *N2;
		*N2 = *N3;
		*N3  = troca;
	} if (N1 < N3){
		troca = *N1;
		*N1 = *N3;
		*N3 = troca;
	} if (N1 < N2){
		troca = *N1;
		*N1 = *N2;
		*N2 = troca;
	} 
}

int main(int argc, char const *argv[]){
	int N1=3, N2=5, N3=1;
	printf("Antes: %d, %d, %d\n",N1,N2,N3);
	ordena(&N1,&N2,&N3);
	printf("Depois: %d, %d, %d\n",N1,N2,N3);
	return 0;
}
