#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
	system("color 0B");
	bool V=true, F=false;
	int num1=3, num2=4, num3;
	char word1='S', word2='N';
	
	printf("\n\t Las operaciones con enteros son:");
	
	num3=num1+num2;
	printf("\n\n\t La suma de %d + %d = %d",num1,num2,num3);
	
	num3=num1-num2;
	printf("\n\n\t La resta de %d - %d = %d",num1,num2,num3);
	
	num3=num1/num2;
	printf("\n\n\t La division de %d / %d = %.2f",num1,num2,num3);
	
	num3=num1*num2;
	printf("\n\n\t La suma de %d * %d = %d",num1,num2,num3);
	
	num1=3;
	printf("\n\n\t 3 << 2 = %d",num1<<2);
	
	num1=12;
	printf("\n\n\t 3 >> 2 = %d",num1>>2);
	
	num3=num1%num2;
	printf("\n\n\t El residuo de %d / %d = %d",num1,num2,num3);
	
	num1=num2;
	num1++;
	printf("\n\n\t El incremento de %d es %d",num2,num1);
	
	num1=num2;
	num1--;
	printf("\n\n\t El decremento de %d es %d",num2,num1);
	
	if(num1==num2)
	{
		printf("\n\n\t  %d y %d son iguales",num1,num2);
	}
	else
	{
		printf("\n\n\t  %d y %d son diferentes",num1,num2);
	}
	
	if(num1<num2)
	{
		printf("\n\n\t  %d  es menor",num1);
	}
	else
	{
		if(num1>num2)
		{
			printf("\n\n\t  %d  es mayor",num1);
		}
		else
		{
			printf("\n\n\t Ninguno es mayor");
		}
	}
	
	printf("\n\t");
	system("pause");
	system("cls");
	
	printf("\n\t Las operaciones con caracteres son:");
	
	if(word1==word2)
	{
		printf("\n\n\t Los caracteres son iguales");
	}
	else
	{
		if(word1>word2)
		{
			printf("\n\n\t %c es mayor que %c",word1,word2);
		}
		else
		{
			printf("\n\n\t %c es menor que %c",word1,word2);
		}
	}
	
	printf("\n\t");
	system("pause");
	system("cls");
	
	
	//bool V=true, F=false;//
	
	return 0;
}
