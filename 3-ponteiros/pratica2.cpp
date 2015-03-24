#include "../leandrolib.h"

int main(int argc, const char *argv[]){
  int i=0;
  double *pempresa, empresa[4];
  pempresa = empresa;

  for (i = 0; i < 4; i++) {
    cout << "empresa " << i << ": ";
    cin >> empresa[i];
  }

  for (i = 3; i >= 0; i--) {
    cout << "Faturamento " << i << ": " << pempresa + i << "\n";
  }

  return 0;
}
