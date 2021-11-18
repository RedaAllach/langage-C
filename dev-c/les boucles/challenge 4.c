#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int N,M;
	printf("entrer la valeur de N");
	scanf("%d",&N);
	while(N!=0){
		M=N%10;
		N=N/10;
		printf("%d",M);
	}
	
	return 0;
}
