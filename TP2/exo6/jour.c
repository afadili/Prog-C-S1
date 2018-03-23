#include<stdio.h>
int main(){
  int J,sie,an,mo,sem,jo;
  printf("Veuillez entrer un nombre de jours : ");
  scanf("%d",&J);
  sie=J/36000;
  J=J%36000;
  an=J/360;
  J=J%360;
  mo=J/30;
  J=J%30;
  sem=J/6;
  J=J%6;
  jo=J;
  if (sie>1){
    printf("%d siècles ",sie);
  }
  else
    printf("%d siècle ",sie);
  
    if (an>1){
    printf("%d annees ",an);
  }
  else
    printf("%d annee ",an);
    
    printf("%d mois ",mo);
    
    if (sem>1){
    printf("%d semaines ",sem);
  }
  else
    printf("%d semaine ",sem);
    
    if (jo>1){
    printf("%d jours ",sie);
  }
  else
    printf("%d jour ",sie);
 
  return 0;
}
