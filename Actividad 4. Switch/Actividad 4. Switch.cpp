#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("color 0B");
	
	char operador;
	int num1=0;
	int num2=0;
	float result=0;
	
	printf("\n\t Ingrese un operador:  ");
	scanf("%c",&operador);
	fflush(stdin);
	
	printf("\n\t ");
	system("pause");
	system("cls");
	
	printf("\n\t Ingrese un numero:  ");
	scanf("%d",&num1);
	
	printf("\n\t ");
	system("pause");
	system("cls");
	
	printf("\n\t Ingrese otro numero:  ");
	scanf("%d",&num2);
	
	printf("\n\t ");
	system("pause");
	system("cls");
	
	switch(operador)
	{
		case '+':
			result=num1+num2;
		break;
		
		case '-':
			result=num1-num2;
		break;
		
		case '*':
			result=num1*num2;
		break;
		
		case '/':
			result=float(num1)/float(num2);
		break;
		
		default:
			printf("\n\t Operador invalido");
	}
	
	if(operador=='+' || operador=='-' || operador=='*' || operador=='/')
	{
		printf("\n\t La operacion es:\n\n\t %d %c %d = %.2f",num1,operador,num2,result);
	}	
	
	return 0;
}
