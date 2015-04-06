class Linha{
public:
	Ponto *comeco, *fim;

	Linha(){
		comeco = new Ponto();
		fim = new Ponto();
	}
	
	Linha(Ponto (&comeco), Ponto (&fim)){
		this->comeco = &comeco;
		this->fim = &fim;
	}
	
};