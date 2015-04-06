using namespace std;

void ImprimeMatriz(string (&matriz)[20][80]){
	for (int i = 0; i < 20; ++i){
		for (int j = 0; j < 80; ++j){
			cout << matriz[i][j];
		}
			cout << endl;
	}
}

void AdicionarPonto(string (&matriz)[20][80], Ponto (&ponto)){
	int x, y;
	x = ponto.x;
	y = ponto.y;
	
	matriz[x][y] = "P";
}

void AdicionarLinha(string (&matriz)[20][80], Ponto (&comeco), Ponto (&fim)){
	int xComeco, yComeco, xFim, yFim, largura, altura;
	xComeco = comeco.x;
	yComeco = comeco.y;
	xFim = fim.x;
	yFim = fim.y;

	while (xComeco != xFim){
		matriz[xComeco][yComeco] = "L";
		xComeco++;
		cout << xComeco << " " << yComeco << endl;
	}
}
