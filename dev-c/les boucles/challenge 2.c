#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int l,i,j,k;
	printf("entrer le nombre de ligne");
	scanf("%d",&l);
	for (i=1;i<=l;i++){
		for (j=1;j<=l-i;j++){
			printf(" ");
		}
		for (k=1;k<=(2*i)-1;k++){
			printf("*");
		}
	
	printf("\n");     }
	
	return 0;
}
