#include<stdio.h>
#include<math.h>

typedef struct Complexe{
    double reel;
    double img;
  } Complexe;

/* la fonctions initComplexe*/

void initComplexe(Complexe *c,double reel,double img)
{
  (*c).reel=reel;
  (*c).img=img;
}
/*la fonction afficheComplexe */

void afficheComplexe(Complexe c)
{
  if (c.img<0)
    {
      printf("%.2f - %.2f * i\n",c.reel,-(c.img));
    }
  else {
    printf("%.2f + %.2f * i\n",c.reel,c.img);
  }
}

/* la fonction Complexe sommeComplexe */
Complexe sommeComplexe(Complexe cUn, Complexe cDeux)
{
  Complexe som;
  som.reel=cUn.reel + cDeux.reel;
  som.img=cUn.img + cDeux.img;
  return som;
}

/* la fonction produitComplexe */

Complexe produitComplexe(Complexe cUn, Complexe cDeux)
{
  Complexe prod;
  prod.reel=((cUn.reel * cDeux.reel)-(cUn.img * cDeux.img));
  prod.img=((cUn.reel * cDeux.img)+(cDeux.reel * cUn.img));
  return prod;
}
/*la fonction Conjugue */

Complexe conjugue(Complexe c)
{
  c.img=-(c.img);
  return c;
}

/*la fonction moduleComplexe */
double moduleComplexe(Complexe c)
{
  return sqrt((c.reel*c.reel)+(c.img*c.img));
}

/*la fonction inverseComplexe */
Complexe inverseComplexe(Complexe c)
{
  Complexe invC;
  if (moduleComplexe(c)==0)
    {
      printf("erreur\n");
    }
  else
    invC.reel = (c.reel)/(pow(moduleComplexe(c),2));
  invC.img = (conjugue(c)).img/(pow(moduleComplexe(c),2));
  return invC;
}

/* correction de la fonction inverse 
int calculeInverse(complexe c,complexe *cInv)
{
   if (module(c)!=0){
      Complexe conj=conjugue(c);
      cInv->reel=conj.reel/(module(c)*module(c));
      cInv->img=conj.img/(module(c)*module(c));
      return 1;
     }
  else 
     return 0;
}
*/

/*la fonction main */

int main()
{
  Complexe z;
  Complexe y;
  initComplexe(&z,3,2);
  initComplexe(&y,3,2);
  afficheComplexe(z);
  afficheComplexe(y);
  afficheComplexe(sommeComplexe(z,y));
  afficheComplexe(produitComplexe(z,y));
  afficheComplexe(conjugue(z));
  printf("le module de z est %f\n",moduleComplexe(z));
  printf("l'inverse de z est : \n");
  afficheComplexe(inverseComplexe(z));
}

  
