#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("color 0B");
	
	int num;
	int n;
	int i;
	int mult;
	
	printf("\n\t Ingrese un numero:  ");
	scanf("%d",&num);
	system("cls");
	printf("\n\t Ingrese una cantidad de multiplos:  ");
	scanf("%d",&n);
	system("cls");
	printf("\n\t Los multiplos son:\n\n\t ");
	for(i=1;i<=n;i++)
	{
		mult=i*num;
		printf("%3d ",mult);
		if(i%10==0)
		{
			printf("\n\t ");
		}
	}
	
	return 0;
}
