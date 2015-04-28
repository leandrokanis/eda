#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int Compara(char a[], char b[], int n = 0){
  
  cout << a[n] << b[n] << endl;

  if (a[n] != b[n])
    return 0;
  if (a[n] == '\0')
    return 1;
  else
    return Compara(a, b, n+1);
}

int main(int argc, const char *argv[]){
  char *n = new char[100];
  char *w = new char[100];
  w = "leandro";
  n = "leandro";

  int a = Compara(w, n);
  cout << a << endl;

  return 0;
}