#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[50];
	char prenom[50];
	int age;
	char tele;
	char sexe[50];
	printf("donner votre nom");
	scanf("%s",&name);
	printf("donner votre prenom");
	scanf("%s",&prenom);
	printf("donner votre age");
	scanf("%d",&age);
	printf("donner votre tele");
	scanf("%s",&tele);
	printf("donner votre sexe");
	scanf("%s",&sexe);
	printf("bonjour %s %s et votre age est %d et votre tele est %s et votre sexe est %s ",name,prenom,age,tele,sexe);
	
	return 0;
}
