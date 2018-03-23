#include<stdio.h>
#include<string.h>
int main(){
int a; 
char caractere[3000];
printf("Veuillez entrer une chaine de caractère: ");
scanf("%s",caractere);
printf("rentrer un entier: ");
scanf("%d",&a);
   if (a<=strlen(caractere))
     {
	     if (caractere[a-1]>='A' && caractere[a-1]<='z')
	       {
		     if ((caractere[a-1])>='a')
			     printf("c'est une minuscule");
		     else 
			     printf("c'est une majuscule");
		}
	     else
	     if (caractere[a-1]>='0' && caractere[a-1]<='9')
			printf("c'est un chiffre");
		else 
			printf("c'est autre chose");
	printf("\n");
	}
	else 
		printf("erreur\n");
return 0;
}
