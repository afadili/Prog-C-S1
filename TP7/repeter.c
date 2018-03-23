#include<stdio.h>
int main(int argc, char *argv[])
{
  printf("le nombre d'arguments est : %d\n",argc);
  int i=0;
  for (i=0;i<argc;i++)
    {
      printf("%s\n",argv[i]);
    }
  return 0;
}
