#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a1,b1,a2,b2,distance;
	printf("entrez le point  M a1 et b2");
	scanf("%f%f",&a1,&b1);
	printf("entrez le point N a2 et b2");
	scanf("%f%f",&a2,&b2);
	distance=sqrt(pow(a2-a1,2)+pow(b2-b1,2));
	printf("distance %f",distance);
	
	
	return 0;
}
