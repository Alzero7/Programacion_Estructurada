#include <stdio.h>
#include <stdlib.h>

int Capturar_Numeros(int Catch[][3]);
int Capturar_Escalar(int *Escalar);
int Escalar_Por_Numeros(int num1[][3],int num2);
int Resultados(int Ans[][3]);

int main()
{
	system("color 0B");
	
	int num_esc=0;
	int a[3][3];
	
	Capturar_Numeros(a);
	system("cls");
	
	Capturar_Escalar(&num_esc);
	system("cls");
	
	Escalar_Por_Numeros(a,num_esc);
	system("cls");
	
	Resultados(a);
	return 0;
}

int Capturar_Numeros(int Catch[][3])
{
	int i=0;
	int j=0;
	
	printf("\n\t Ingrese 9 numeros:\n\n\t ");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&Catch[i][j]);
			printf("\t ");
		}
	}
	return Catch[i][j];
}

int Capturar_Escalar(int *Escalar)
{
	int num=0;
	printf("\n\t Ingrese un numero escalar:  ");
	scanf("%d",&num);
	*Escalar=num;
	
	return 0;
}

int Escalar_Por_Numeros(int num1[][3],int num2)
{
	int i=0;
	int j=0;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			num1[i][j]=num1[i][j]*num2;
		}
	}
	
	return num1[i][j];
}

int Resultados(int Ans[][3])
{
	int i=0;
	int j=0;
	
	printf("\n\t Los nuevos numeros del arreglo son: \n\n\t ");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d   ",Ans[i][j]);
		}
		printf("\n\n\t ");
	}
	
	return 0;
}
