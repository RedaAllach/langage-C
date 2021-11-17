#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,nmbr,c=0;
	printf("entrez le nombre");
	scanf("%d",&nmbr);
	for (i=1 ;i <= nmbr; i++){
		if (nmbr%i==0){
		c++;
		}
		
	
	}
	if (c==2){
    	printf("le nombre est premier");

	}
	else{
		printf("le nombre pas premier");
	
	}
	return 0;
}
