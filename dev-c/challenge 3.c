#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float km,metre,mile;
	printf("la distance en metre");
	scanf("%f",&metre);
	km=metre*1000;
	mile=km*1.609;
	printf("transforme en mile est %f",mile);
	
	return 0;
}
