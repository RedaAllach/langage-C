#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	printf("entrez la valeur de x,y");
	scanf("%d",&x);
	printf("entrez la valeur de y");
	scanf("%d",&y);
	printf("resultat de x+y=%d \n",x+y);
	printf("resultat de x-y=%d \n",x-y);
	printf("resultat de x*y=%d \n",x*y);
	printf("resultat de x/y=%d \n",x/y);
	printf("resultat de x%y)%d \n",x%y);
	
	return 0;
}
