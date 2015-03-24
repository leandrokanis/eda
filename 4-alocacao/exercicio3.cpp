#include <iostream>
#include "VetoresCPP.cpp"

int main(int argc, const char *argv[]){
	char *pvetcar;
	int ptammax = 10, pqtde = 0;
	pvetcar = new char[ptammax];

	AdicionaCaractere(pvetcar, 'a', ptammax, pqtde);

	return 0;
}
