#include<stdio.h>

int main(int argc, char *argv[])
{
  int var1, var2;
  if (argc==3)
    {
      sscanf(argv[1],"%d",&var1);
      sscanf(argv[2],"%d",&var2);
      printf("%d\n", var1*var2);
    }
  else
    {
      printf("erreur\n");
    }
  return 0;
}
