#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int add(int a,int b){
	return a+b;
}
int main() {
	int a,b,somme;
	printf("donner moi un nombre");
	scanf("%d%d",&a,&b);
	somme=add(a,b);
	printf("resultat est %d",somme);
	
	return 0;
}
