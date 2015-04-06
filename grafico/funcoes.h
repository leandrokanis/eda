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
	int largura, altura, incremento;
	Ponto ponteiro(comeco.x, comeco.y);

	// incremento pode ser negativo ou positivo
	altura = comeco.x - fim.x;
	incremento = (altura/abs(altura) * (-1));

	while (ponteiro.x <= fim.x){
		
		matriz[ponteiro.x][ponteiro.y] = "L";
		
		cout << ponteiro.x << " " << ponteiro.y << endl;
		
		ponteiro.x = ponteiro.x + incremento;
	}
}
