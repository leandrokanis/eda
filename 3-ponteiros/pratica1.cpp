#include "../leandrolib.h"

int main(int argc, const char *argv[]){
  int i=0;
  double empresa[5];
  
  for (i = 0; i < 4; i++) {
    cout << "empresa " << i << ": ";
    cin >> empresa[i];
  }

  for (i = 3; i >= 0; i--) {
    cout << "Faturamento " << i << ": " << empresa[i] << "\n";
  }

  return 0;
}
