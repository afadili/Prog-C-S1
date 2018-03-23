#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv)
{
	int var1, var2;
	if(argc==4)
	{
		var1 = atoi(argv[1]);
		var2 = atoi(argv[3]);
		if(argv[2][0]=='+')
		{
			printf("%d\n",var1 + var2);
			return 0;
		}
		else if (argv[2][0]=='-')
			{
				printf("%d\n", var1-var2);
			}
	}
	else 
	{
		printf("pas bon !");
		return -1;
	}
}
