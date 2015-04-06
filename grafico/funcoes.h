using namespace std;

void ImprimeMatriz(string (&matriz)[20][80]){
	for (int i = 0; i < 20; ++i){
		for (int j = 0; j < 80; ++j){
			cout << matriz[i][j];
		}
			cout << endl;
	}
}

void AdicionarPonto(string (&matriz)[20][80], int x, int y){
	matriz[x-1][y-1] = "P";
}