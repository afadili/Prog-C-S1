#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r , x, y, rep=1;
    
    while(rep==1) {
        system("clear");
            printf("Entrer le rayon du cercle : ");
            scanf("%i",&r);
            for (y = -r; y < r+1; y++)  {   
                printf("\n");       
                for (x = -r; x < r+1 ; x++) {            
                         if(abs((x * x) + (y * y)-(r * r)) <= (r/2)) {                     
                                printf(" * ");                                         
                        }
                         else  {                                              
                                printf("   ");                       
                        }         
                }                
            } 
            printf("\n\nrepeter (oui=> 1)? ");
            scanf("%i",&rep);
        }
    system("clear");
    printf("\n============>  AUREVOIR  <===========\n");
    return 0;
}

