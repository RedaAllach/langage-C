#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float km,mile,metre;
	printf("la distance en mile");
	scanf("%f",&mile);
	metre=mile/1000;
	km=mile/1.609;
	printf("la transforme en metre eszt %f",metre);
	
	return 0;
}
