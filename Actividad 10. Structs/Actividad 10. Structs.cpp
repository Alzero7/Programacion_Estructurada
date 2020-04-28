#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Variables{
	int ID;
	int Answer;
	int i;
};
	
typedef struct Variables  Herramientas;


struct Informacion_Estudiante{
	char ID_estudiante[4];
	char Nombre[25];
	char Ap_Pat[25];
	char Ap_Mat[25];
	char Registro[100];
};
	
typedef struct Informacion_Estudiante  Datos;	


int main()
{	
	Herramientas Tool;
	Tool.i=0;
	Tool.ID=0;
	Tool.Answer=0;
	
	system("color 0B");
	
	printf("\n\t Ingrese la cantidad de personas a registrar:  ");
	scanf("%d",&Tool.Answer);
	
	Datos Data[Tool.Answer];
	for(Tool.i=0;Tool.i<Tool.Answer;Tool.i++)
	{
		memset(Data[Tool.i].ID_estudiante,0,4);
		memset(Data[Tool.i].Nombre,0,25);
		memset(Data[Tool.i].Ap_Pat,0,25);
		memset(Data[Tool.i].Ap_Mat,0,25);
		memset(Data[Tool.i].Registro,0,100);	
	}
	
	Tool.i=0;
		
	do
	{
		do
		{
			system("cls");
			printf("\n\t Ingrese su ID:  ");
			scanf("%d",&Tool.ID);
		}while(Tool.ID<1000 || Tool.ID>9999);
		
		sprintf(Data[Tool.i].ID_estudiante,"%d",Tool.ID);
		
		system("cls");
		fflush(stdin);
		
		printf("\n\t Ingrese su nombre:  ");
		gets(Data[Tool.i].Nombre);
		
		system("cls");
		fflush(stdin);
		
		printf("\n\t Ingrese su apellido paterno:  ");
		gets(Data[Tool.i].Ap_Pat);
		
		system("cls");
		fflush(stdin);
		
		printf("\n\t Ingrese su apellido materno:  ");
		gets(Data[Tool.i].Ap_Mat);
		
		system("cls");
		fflush(stdin);
		
		strcat(Data[Tool.i].Registro,Data[Tool.i].ID_estudiante);
		strcat(Data[Tool.i].Registro,"  ");
		strcat(Data[Tool.i].Registro,Data[Tool.i].Nombre);
		strcat(Data[Tool.i].Registro," ");
		strcat(Data[Tool.i].Registro,Data[Tool.i].Ap_Pat);
		strcat(Data[Tool.i].Registro," ");
		strcat(Data[Tool.i].Registro,Data[Tool.i].Ap_Mat);	
		
		if(Tool.i>0)
		{
			for(int j=0;j<Tool.i;j++)
			{
				if(strncmp(Data[Tool.i].Registro,Data[j].Registro,4)==0)
				{
					memset(Data[Tool.i].Registro,0,50);
					memset(Data[j].Registro,0,50);
				}
			}
		}
		Tool.i++;
	}while(Tool.i<Tool.Answer);
	
	system("cls");
	for(Tool.i=0;Tool.i<Tool.Answer;Tool.i++)
	{
		if(strcmp(Data[Tool.i].Registro,"")==0)
		{
			Tool.i=Tool.i;
		}
		else
		{
			printf("\n\t ");
			printf("%s",Data[Tool.i].Registro);
		}
	}
	return 0;
}
