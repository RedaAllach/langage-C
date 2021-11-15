#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,somme;
	printf("entrez la valeur de x \n");
	scanf("%d",&x);
	printf("entrez la valeur de y \n");
	scanf("%d",&y);
	somme =x+y;
	if (x==y)
	printf("%d",somme*3);
	else 
	printf("%d",somme);
	
	return 0;
}
