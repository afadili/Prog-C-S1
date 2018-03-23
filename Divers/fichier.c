#include <stdio.h>
int main() {
	int J, sie, An, mo, sem, jo ;
	printf("Veuillez entrer un nombre de jour(s) :");
	scanf("%d", &J);
	sie=J/360000;
	J=J%360000;
	An=J/360;
	J=J%360;
	mo=J/30;
	J=J%30;
	sem=J/6;
	J=J%6;
	jo=J;
	if(sie<=1)
	printf("%d siècle ",sie);
	else 
	printf("%d siècles ",sie);
	printf("%d\n%d\n%d\n%d\n%d\n",sie,An,mo,sem,jo);
	
	return 0;
	}
