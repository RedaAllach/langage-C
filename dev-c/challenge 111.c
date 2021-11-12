#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float rec,longeur,largeur;
	printf("entrez longeur");
	scanf("%f",&longeur);
	printf("entrez largeur");
	scanf("%f",&longeur);
	rec= 2*(longeur + largeur);
	printf(" la circonférence est %f",rec);
	
	return 0;
}
