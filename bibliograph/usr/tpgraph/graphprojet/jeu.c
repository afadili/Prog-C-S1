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

void afficheX(int x, int y)
{
	MLV_draw_image(imageGB,f(x),f(y));
	MLV_actualise_window();

}
/* fonction principale */
int main()
{
	int a,b;
	int fixB =0, fixR=0;/* variables boolennes pour gérer la disposition des guerries et des serfs (une fois) */
	int mouseX,mouseY; /* variables qui contiennent les positions de la souris lorsqu'on clique */
	int posX, posY, Xgb, Ygb;
	int x=(width/2);
  	int y=(height/2);
 	int taille_interlinge = 9;
  MLV_Keyboard_button touche;
  MLV_Image *imageGB;
  MLV_Image *imageGR;
  MLV_Image *imageSB;
  MLV_Image *imageSR;
/* affichage des messages */
  MLV_create_window("jeu","icone du jeu",width ,height+200);
  MLV_draw_adapted_text_box(
		400,760,
		"Qui va commencer la partie ? ",
		taille_interlinge,
		MLV_COLOR_YELLOW1, MLV_COLOR_WHITE, MLV_COLOR_BLACK,
		MLV_TEXT_CENTER
	);
  MLV_draw_filled_rectangle(290,820,120,30,MLV_COLOR_BLUE);
  MLV_draw_text(300,825,"Joueur Bleu !",MLV_COLOR_WHITE, MLV_COLOR_BLACK);
  MLV_draw_filled_rectangle(590,820,120,30,MLV_COLOR_RED);
  MLV_draw_text(600,825,"Joueur Rouge !",MLV_COLOR_WHITE, MLV_COLOR_BLACK);
  /* fin d'affichage des messages box */
  Grille(); /* affichage de la grille */
  /* upload des images */
  imageGB = MLV_load_image("guerrierBleu.png");
  imageGR = MLV_load_image("guerrierRouge.png");
  imageSB = MLV_load_image("serfBleu.png");
  imageSR = MLV_load_image("serfRouge.png");
  /* adaptation de la taille des images avec la taille de la case */
  MLV_resize_image_with_proportions(imageGB,60,60);
  MLV_resize_image_with_proportions(imageGR,60,60);
  MLV_resize_image_with_proportions(imageSB,60,60);
  MLV_resize_image_with_proportions(imageSR,60,60);
  MLV_actualise_window();
  /* procédure qui permet de poser les pions au début de la partie */
   do {
   		MLV_wait_mouse(&mouseX,&mouseY);
  		if ( mouseX<= 410 && mouseX >= 290 && mouseY<= 850 && mouseY>= 820 && fixB == 0)
		  	{
			  	 MLV_wait_mouse(&posX,&posY);
			  	 MLV_draw_image(imageGB,f(posX),f(posY));
			  	  Xgb = f(posX);
			  	  Ygb = f(posY);
			  	 MLV_actualise_window();
			  	 do 
			  	 {
			  	 	MLV_wait_mouse(&posX,&posY);
				  	 if (f(posX) != Xgb || f(posY) != Ygb)
				  	 { 
				  	 	MLV_draw_image(imageSB,f(posX),f(posY));
				  	 	MLV_actualise_window();
				  	 }
				 }
				 while (f(posX) == Xgb && f(posY) == Ygb);
				 Xgb = f(posX);
			  	 Ygb = f(posY);
				 do 
			  	 {
			  	 	MLV_wait_mouse(&posX,&posY);
				  	 if (f(posX) != Xgb || f(posY) != Ygb)
				  	 { 
				  	 	MLV_draw_image(imageSB,f(posX),f(posY));
				  	 	MLV_actualise_window();
				  	 }
				 }
				 while (f(posX) == Xgb && f(posY) == Ygb);
				  	/* MLV_wait_mouse(&posX,&posY);
				  	 MLV_draw_image(imageSB,f(posX),f(posY));*/
				  	 fixB = 1;
		  	}
		 if ( mouseX<= 710 && mouseX>= 590 && mouseY<= 850 && mouseY>=820 && fixR == 0)
			  {
			  	 MLV_wait_mouse(&posX,&posY);
			  	 MLV_draw_image(imageGR,f(posX),f(posY));
			  	 MLV_actualise_window();
			  	 MLV_wait_mouse(&posX,&posY);
			  	 MLV_draw_image(imageSR,f(posX),f(posY));
			  	 MLV_actualise_window();
			  	 MLV_wait_mouse(&posX,&posY);
			  	 MLV_draw_image(imageSR,f(posX),f(posY));
			  	 fixR =1;
			  }
		MLV_actualise_window();
		}
	while (mouseX >0 && mouseY> 0);
	coordonnee(&a,&b);
	printf(" coordonnee a et b : %d et %d", a,b);
   int vbe;
   /* procédure qui gère les déplacements des joueurs avec le clavier */
   do 
   {
     MLV_wait_keyboard(&touche, NULL, NULL);
     vbe = 0;
     if ((touche == MLV_KEYBOARD_d) || (touche == MLV_KEYBOARD_g) || (touche == MLV_KEYBOARD_b) || (touche == MLV_KEYBOARD_k))
     {
       if (touche == MLV_KEYBOARD_d)
	   {
	    
	     if(x<width - 60)
	       {
		 x=x+60;
	       }
	     else
	       {
		 vbe = 1;
	       }
	   }
       if  (touche == MLV_KEYBOARD_q)
	   {
	  
	     if(x>=60)
	       {
		    x=x-60;
	       }
	     else
	       {
		 vbe = 1;
	       }
	     
	   }
       if (touche == MLV_KEYBOARD_s)
	   {
	       if (y<height - 60)
		 {
		    y=y+60;
		 }
	        else
	       {
		 vbe = 1;
	       }
	   }
       if (touche == MLV_KEYBOARD_z)
	   {
	    
	     if (y>=60)
	       {
		  y=y-60;
	       }
	      else
	       {
		 vbe = 1;
	       }
	   }
       if (vbe == 0)
	 { 
       MLV_clear_window(MLV_COLOR_BLACK);
       Grille();
      /* MLV_draw_image(image,x,y);*/
       MLV_actualise_window();
	 }
     }
     
 }while (touche != MLV_KEYBOARD_q);
   MLV_wait_seconds(60);
  
}
