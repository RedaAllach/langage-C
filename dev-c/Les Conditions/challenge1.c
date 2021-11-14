#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float fahrenheit,celsius;
	printf("Entrer la temmperature en farenheit");
	
	scanf("%f",&fahrenheit);
//	C = (F-32)/1.8

	celsius=(fahrenheit-32)/1.8;
	if (celsius <0){
		printf("tres froid");
		
	}
	else if (celsius <10 ){
		printf("froid");
		
	}
	else if (celsius <30){
		printf("chaud");
	}
	else { 
	printf("tres chaud");
	
	}
	
	return 0;
}
