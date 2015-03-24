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
