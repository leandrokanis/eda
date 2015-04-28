#include <stdio.h>

int Somatorio(n){
	if(n==1){
		return 1;
	} else {
		return Somatorio(n-1) + n;	
	}
}

int main(){
	printf("%i\n", Somatorio(100));
}
