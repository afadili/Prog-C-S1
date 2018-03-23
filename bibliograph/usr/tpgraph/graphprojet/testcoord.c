#include<stdio.h>
#include<MLV/MLV_all.h>

 int width=1080;
 int height=720;

 /* Fonction qui dessine la grille 12 x 18*/

void Grille() 
{
   int i,j;
   for (i=0;i<width;i=i+60)
    {
    for(j=0;j<height;j=j+60)
      {
      MLV_draw_rectangle(i,j,60,60,MLV_COLOR_YELLOW1);
     
      }
    }
}
/* Fonction qui retourne la position x et y au centre de la case */
int f(int x)
{
	return (x/60)*60;
}

void coordonnee( int *x, int *y)
{
	int mouseX, mouseY;
	MLV_wait_mouse(&mouseX, &mouseY);
		*x=mouseX/60;
		*y=mouseY/60;
}

int main()
{
  int a,b;
   MLV_create_window("jeu","icone du jeu",width ,height+200);
   int i,j;
   for (i=0;i<width;i=i+60)
    {
    for(j=0;j<height;j=j+60)
      {
      MLV_draw_rectangle(i,j,60,60,MLV_COLOR_YELLOW1);
     
      }
    }
   MLV_actualise_window();
   coordonnee(&a,&b);
   printf(" coordonnee a et b : %d et %d\n", a,b);
}