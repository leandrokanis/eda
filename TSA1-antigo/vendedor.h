class Vendedor{
public:
	int codigo;
	double comissao;
	double salarioBase;
	double salarioFinal;
	double valorDeVendas;

	Vendedor(){
		codigo = -1;
		comissao = -1;
		salarioBase = -1;
		salarioFinal = -1;
		valorDeVendas = -1;
	}

	Vendedor(int codigo, double salarioBase, double valorDeVendas){
		this->codigo = codigo;
		this->salarioBase = salarioBase;
		this->valorDeVendas = valorDeVendas;
	}

	~Vendedor(){
		codigo = -1;
		comissao = -1;
		salarioBase = -1;
		salarioFinal = -1;
		valorDeVendas = -1;
	}
	
};