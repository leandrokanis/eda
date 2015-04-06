class Ponto{
public:
	int x;
	int y;

	Ponto(){
		x = -1;
		y = -1;
	}
	
	Ponto(int x, int y){
		this->x = x;
		this->y = y;
	}

	void setPonto(int x, int y){
		this->x = x;
		this->y = y;
	}
	
};