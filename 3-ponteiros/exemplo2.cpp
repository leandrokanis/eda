#include "../leandrolib.h"

int main(int argc, const char *argv[]){
  int *numa, *numb, **pnuma, **pnumb, num=0, ini=0;
  num = LerInteiro((char *)"Numa: ");
  ini = LerInteiro((char *)"Ini: ");
  numa = &ini;
  numb = &num;
  *pnumb = numb;
  *pnuma = numa;

  printf("Endereco b: %p\n", pnumb);
  printf("Endereco a: %p\n", pnuma);

  return 0;
}
