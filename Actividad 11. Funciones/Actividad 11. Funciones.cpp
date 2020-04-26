#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int tope);

int main()
{
	system("color 0B");
	int num=0;
	do
	{
		system("cls");
		printf("\n\t Ingrese un numero de veces a repetir la suceccion fibonacci:  ");
		scanf("%d",&num);
	}while(num<1);
	system("cls");
	printf("\n\t El resultado es: %2d",Fibonacci(num));
	return 0;
}

int Fibonacci(int tope)
{
	int num1=0;
	int num2=1;
	int i=0;
	int Resultado=0;
	
	do
	{
		Resultado=num1+num2;
		num1=num2;
		num2=Resultado;
		i++;
	}while(i!=tope);
	
	return Resultado;
}
