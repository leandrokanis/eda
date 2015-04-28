#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int f(int n){
  if(n==1)
    return 1;
  else if (n==0)
    return 0;
  else
    return f(n-2) + f(n-1);
}

double tempo(int n){
  time_t start, end, diff;
  
  start = clock();
  f(n);
  end = clock();
  diff = ((double)(end- start))*1000/CLOCKS_PER_SEC;

  return diff;  
}

int recursoes(int n, int cont=1){
  cont++;
  cout<<cont<<endl;
  if(n==1){
    return 1;
  }
  else if (n==0){
    return 0;
  }
  else {
    return recursoes(n-2, cont) + recursoes(n-1, cont);
  }
}


int main(int argc, const char *argv[]){

  
  int i = 10;
  
 // std::cout << std::endl << f(i) << std::endl;
  std::cout << std::endl << recursoes(i) << std::endl;
  
  return 0;
}
