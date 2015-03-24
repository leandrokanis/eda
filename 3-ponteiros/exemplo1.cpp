#include <iostream>
using namespace std;
#include "../leandrolib.h"

int main(int argc, const char *argv[]){
  int numa =0, numb=0, *pnuma, *pnumb;
  numa = LerInteiro((char *)"numa: ");
  numb = LerInteiro((char *)"numb: ");
  pnuma = &numa;
  pnumb = &numb;

  printf("Endereco a: %p\n", pnuma);
  printf("Endereco b: %p\n", pnumb);

  return 0;
}
