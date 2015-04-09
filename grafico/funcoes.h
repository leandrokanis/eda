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
	int incremento, largura, altura;
	Ponto ponteiro(comeco.x, comeco.y);

	// incremento pode ser negativo ou positivo
	altura = comeco.x - fim.x;
	largura = comeco.y - fim.y;
	incremento = (altura/abs(altura) * (-1));

	altura = (altura/abs(altura)) * altura + incremento*incremento;
	largura = (largura/abs(largura)) * largura + incremento*incremento;


	for(ponteiro.x; ponteiro.x <= fim.x; ponteiro.x ++){
		
		matriz[ponteiro.x][ponteiro.y] = "L";
		// cout << "ponteiro.x: " << ponteiro.x << endl;
		// cout << "fim.x: " << fim.x << endl;

		// if(((ponteiro.x*largura)%altura) == 0){
		// 	matriz[ponteiro.x][ponteiro.y] = "L";
		// 	ponteiro.y ++;
		// }
		
		
		cout << ponteiro.x << " "<< ponteiro.y << endl;
		
	}
}
