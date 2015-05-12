// TSA1 - 1/2015
// Leandro Alves 10/011/3/4
#include <string>
using std::string; 
class Cliente{

public:
	int matricula;
	double comissao;
	double altura;
	double idade;
	double peso;
	double imc;
	string sexo;
	string faixaEtaria;
	string condicao;

	Cliente(){
		matricula = -1;
		comissao = -1;
		altura = -1;
		idade = -1;
		peso = -1;
		imc = -1;
		sexo = " ";
		faixaEtaria = " ";
		condicao = " ";
		
	}
	
};