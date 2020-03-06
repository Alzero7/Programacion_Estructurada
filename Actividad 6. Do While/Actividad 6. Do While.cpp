#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("color 0B");
	
	int num1=0;
	int sum=0;
	int i=-1;
	float promedio=0;
	
	printf("\n\t Ingrese un numero:\n\n\t ");
	do
	{
		i++;
		sum += num1;
		scanf("%d",&num1);
		printf("\n\t ");
	}while(num1>=0);
	promedio=(float)sum/(i==0?1:i);
	
	printf("\n\t ");
	system("cls");
	printf("\n\t El promedio de los numeros ingresados es:  %.2f",promedio);
	
	return 0;
}
