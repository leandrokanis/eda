#include <stdio.h>

int doisan(n){
	if(n == 1){
		return 2;
	} else{
		return 2 * doisan(n-1);
	}
}

int main(){
	printf("%i\n", doisan(4));
}
