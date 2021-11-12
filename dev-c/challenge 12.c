#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,X;
	printf("entrez the number");
	scanf("%d",&X);
	
	a=(X%100)%10;
	b=(X%100)/10;
	c=(X/100);
	printf("L inverse de x =%d%d%d",a,b,c);
	

	return 0;
}
