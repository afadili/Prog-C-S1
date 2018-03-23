#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
  if (argc!=3)
    {
      printf("erreur\n");
    }
  else
    {
      int i=0;
      int compt=0;
      for (i=0; i<strlen(argv[1]); i++)
	{
	  while (argv[2][i]!='\0')
	    {
	      if (argv[1][i]==argv[2][i])
	    {
	      compt++;
	    }
	    }
	}
        printf("%d\n",compt);
    }
}
