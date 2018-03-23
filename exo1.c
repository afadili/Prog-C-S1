#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define maxtab 5

typedef struct Complexe
{
	float reel;
	float img;
}Complexe;


void initComplexe(Complexe *c,float reel, float img)
{
	(*c).reel=reel;
	c->img=img;
}

void afficheComplexe(Complexe c)
{
	if (c.img<0)
	{
		printf("%.1f - %.1f*i\n",c.reel,(-(c.img)) );
	}
	else 
	{
	printf("%.1f + %.1f*i\n",c.reel,c.img );
	}	
}

Complexe sommeComplexe(Complexe c1, Complexe c2)
{
	Complexe som;
	som.reel=(c1.reel)+(c2.reel);
	som.img=(c1.img)+(c2.img);
	return som;
}

Complexe produitComplexe(Complexe c1, Complexe c2)
{
	Complexe prod;
	prod.reel=((c1.reel)*(c2.reel))-((c1.img)*(c2.img));
	prod.img=((c1.reel)*(c2.img))+((c2.reel)*(c1.img));
	return prod;
}

Complexe conjugue(Complexe c)
{
	Complexe conj;
	conj.reel=c.reel;
	conj.img=-(c.img);
	return conj;
}

double moduleComplexe(Complexe c)
{
	double mod; 
	mod =sqrt(pow((c.reel),2)+pow((c.img),2));
	return mod;
}


int main()
{
	Complexe c1;
	Complexe c2;
	initComplexe(&c1,2,2);
	initComplexe(&c2,2,3);
	printf("-------complexe 1-------\n");
	afficheComplexe(c1);
	printf("-------complexe 2-------\n");
	afficheComplexe(c2);
	printf("-------Somme des deux -------\n");
	afficheComplexe(sommeComplexe(c1,c2));
	printf("-------produit des deux-------\n");
	afficheComplexe(produitComplexe(c1,c2));
	printf("-------------Conjugue de 1-----------\n");
	afficheComplexe(conjugue(c1));
	printf("-------------Conjugue de 2-----------\n");
	afficheComplexe(conjugue(c2));
	printf("-------------module de 1-----------\n");
	printf("%f\n",moduleComplexe(c1) );
}
