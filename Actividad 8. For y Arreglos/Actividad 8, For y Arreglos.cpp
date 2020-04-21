#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("color 0B");
	
	int num;
	int num_esc;
	int a[3][3];
	int i,j;
	
	printf("\n\t Ingrese 9 numeros:\n\n\t ");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			printf("\t ");
		}
	}
	
	system("cls");
	
	printf("\n\t Ingrese un numero escalar:  ");
	scanf("%d",&num_esc);
	
	system("cls");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=a[i][j]*num_esc;
		}
	}
	
	printf("\n\t Los nuevos numeros del arreglo son: \n\n\t ");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d   ",a[i][j]);
		}
		printf("\n\n\t ");
	}
	
	return 0;
}
