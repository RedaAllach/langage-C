#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf(" entrez la valeur de a et b");
	scanf("%d%d",&a,&b);
	printf("resultat de a+b=%d \n",a+b);
	printf("resultat de a-b=%d \n",a-b);
	printf("resultat de a*b=%d \n",a*b);
	printf("resultat de a/b=%d \n",a/b);
	printf("resultat de a Mod b=%d \n",a%b);
	return 0;
}
