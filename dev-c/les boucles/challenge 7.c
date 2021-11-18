#include <stdio.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool ispremier(int a){
	bool t=true;
	int i;
	for (i=2;i<a;i++){
		if (a%i==0)
		t=false;				
	}
	if (t==true)
		printf("le nombre est premier");
		else 
			printf("le nombre est  pas premier");
	return t;
}
int main(int argc, char *argv[]) {
	int a;
	printf("donner a");
	scanf("%d",&a);
	ispremier(a);
	
	return 0;
}
