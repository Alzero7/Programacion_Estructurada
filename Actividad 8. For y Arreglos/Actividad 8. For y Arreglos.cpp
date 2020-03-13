#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("color 0B");
	
	int num;
	do
	{
		system("cls");
		printf("\n\t Ingrese un numero menor a 100:  ");
		scanf("%d",&num);
	}while(num>=100 || num<=0);
	system("cls");
	int a[num];
	int z=0;
	printf("\n\t Los numeros del 1 al %d son:\n\n\t ",num);
	for(int i=1;i<=num;i++)
	{
		
		printf("%2d  ",i);
		if(i==1 || i==2 || i==3 || i==5)
		{
			printf("Es primo");
		}
		if(i!=1 && i!=2 && i!=3 && i!=5 && i%1==0 && i%i==0 && i%2!=0 && i%3!=0 && i%5!=0)
		{
			printf("Es primo");
		}
		printf("\n\t ");
		a[z]=i;
		z++;
	}
	
	
	
	return 0;
}
