#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a , b , c, d;
	int somme;
    float moyenne;
        printf("donner moi les quatres valeurs \n");
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        scanf("%d",&d);
	somme= a + b + c + d;
	printf("la somme est %d",somme);
	moyenne = somme/4;
	printf("moyenne est %f",moyenne);
}




