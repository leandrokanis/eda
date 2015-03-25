#include <stdio.h>
#include <stdlib.h>

int *CriaVetInt(int	quantidade){
	int *vetor;
	vetor = (int*)malloc(quantidade*sizeof(int));
	return vetor;
}

float *CriaVetFloat(int quantidade){
	float *vetor;
	vetor = (float*)malloc(quantidade*sizeof(float));
	return vetor;
}

int main(int argc, const char *argv[])
{
	int *ponteiro;
	ponteiro = CriaVetInt(10);

	printf("%p", ponteiro);
	return 0;
}
