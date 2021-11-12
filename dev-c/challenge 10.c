#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	const float a=5.2;
    float rayon,c;
	printf("entrez valeur de rayon");
	scanf("%f",&rayon);
	c=2*a*rayon;
	printf("la circonférence est %f",c);
	
	
	
	return 0;
}
