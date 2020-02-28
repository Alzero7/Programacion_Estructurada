#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("color 0B");
	
	int num1=0;
	int sum=0;
	int i=0;
	float promedio=0;
	
	printf("\n\t Introduzca los numeros que dese%c\n",138);
	
	while(num1>=0)
	{
		printf("\n\t ");
		scanf("%d",&num1);
		if(num1>=0)
		{
			sum=sum+num1;
			i=i+1;
		}
	}
	promedio=(float)sum/(float)i;
	
	printf("\n\t ");
	system("cls");
	printf("\n\t El promedio de los numeros ingresados es:  %.2f",promedio);
	
	return 0;
}
