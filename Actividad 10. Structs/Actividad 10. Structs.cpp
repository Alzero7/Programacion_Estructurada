#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Informacion_Estudiante{
	char ID_estudiante[5];
	char Nombre[25];
	char Ap_Pat[25];
	char Ap_Mat[25];
	int Dia;
	int Mes;
	int Year;
	char Facultad[50];
	char Carrera[50];
	char Semetre[50];
	char Genero[12];
};
	
typedef struct Informacion_Estudiante  Datos;	


int main()
{
	int Answer=0;
	int ID=0;
	int i=0;
	int op=0;
	
	printf("\n\t Ingrese el numero de personas a capturar: ");
	scanf("%d",&Answer);
	
	Datos Registros[Answer+1];
	
	for(i=0;i<Answer;i++)
	{
		system("cls");
		fflush(stdin);
		
		printf("\n\t Ingrese su ID: ");
		gets(Registros[i].ID_estudiante);
				
		system("cls");
		fflush(stdin);
		
		printf("\n\t Ingrese su Nombre: ");
		gets(Registros[i].Nombre);
		
		system("cls");
		fflush(stdin);
		
		printf("\n\t Ingrese su Apellido Paterno: ");
		gets(Registros[i].Ap_Pat);
		
		system("cls");
		fflush(stdin);
		
		printf("\n\t Ingrese su Apellido Materno: ");
		gets(Registros[i].Ap_Mat);
		
		system("cls");
		fflush(stdin);
		
		do
		{
			printf("\n\t Ingrese su Mes de Nacimiento: ");
			scanf("%d",&Registros[i].Mes);
	
			system("cls");
			fflush(stdin);
		}while(Registros[i].Mes<0 || Registros[i].Mes>12);
		
		op=0;
		do
		{
			printf("\n\t Ingrese su Dia de Nacimiento: ");
			scanf("%d",&Registros[i].Dia);
	
			system("cls");
			fflush(stdin);
			
			if((Registros[i].Mes==1 || Registros[i].Mes==3 || Registros[i].Mes==5 || Registros[i].Mes==7 || Registros[i].Mes==8 || Registros[i].Mes==10 || Registros[i].Mes==12) && (Registros[i].Dia>0 || Registros[i].Dia<=31))
			{
				op=1;
			}
			else
			{
				if((Registros[i].Mes==4 || Registros[i].Mes==6 || Registros[i].Mes==9 || Registros[i].Mes==11) && (Registros[i].Dia>0 || Registros[i].Dia<=30))
				{
					op=1;
				}
				else
				{
					if(Registros[i].Mes==2 && Registros[i].Dia==28)
					{
						op=1;
					}
				}
			}
		}while(op!=1);
		
		op=0;
		do
		{
			printf("\n\t Ingrese su A%co de Nacimiento: ",164);
			scanf("%d",&Registros[i].Year);
	
			system("cls");
			fflush(stdin);
			
			if(Registros[i].Year<1950 || Registros[i].Year>2019)
			{
				op=1;
			}
		}while(op!=1);
		
		
		printf("\n\t Ingrese su Facultad: ");
		gets(Registros[i].Facultad);
		
		system("cls");
		fflush(stdin);
		
		printf("\n\t Ingrese su Carrera: ");
		gets(Registros[i].Carrera);
		
		system("cls");
		fflush(stdin);
		
		printf("\n\t Ingrese su Semestre: ");
		gets(Registros[i].Semetre);
		
		system("cls");
		fflush(stdin);
		
		printf("\n\t Ingrese su Genero: ");
		gets(Registros[i].Genero);
		
		system("cls");
		fflush(stdin);
		
		if(i>0)
		{
			for(int j=0;j<i;j++)
			{
				if(strncmp(Registros[i].ID_estudiante,Registros[j].ID_estudiante,4)==0)
				{
					memset(Registros[i].ID_estudiante,0,150);
					memset(Registros[i].Nombre,0,25);
					memset(Registros[i].Ap_Pat,0,25);
					memset(Registros[i].Ap_Mat,0,25);
					memset(Registros[i].Facultad,0,50);
					memset(Registros[i].Carrera,0,50);
					memset(Registros[i].Semetre,0,50);
					memset(Registros[i].Genero,0,50);
					Registros[i].Dia=0;
					Registros[i].Mes=0;
					Registros[i].Year=0;
					memset(Registros[j].ID_estudiante,0,12);
					memset(Registros[j].Nombre,0,25);
					memset(Registros[j].Ap_Pat,0,25);
					memset(Registros[j].Ap_Mat,0,25);
					memset(Registros[j].Facultad,0,50);
					memset(Registros[j].Carrera,0,50);
					memset(Registros[j].Semetre,0,50);
					memset(Registros[j].Genero,0,50);
					Registros[j].Dia=0;
					Registros[j].Mes=0;
					Registros[j].Year=0;
				}
			}
		}
	}
		
	
	
	for(i=0;i<Answer;i++)
	{
		if(strcmp(Registros[i].ID_estudiante,"")!=0)
		{
			printf("\n\t ID: %s",Registros[i].ID_estudiante);
			printf("\n\t Nombre:   %s %s %s",Registros[i].Nombre,Registros[i].Ap_Pat,Registros[i].Ap_Mat);
			printf("\n\t Fecha de Nacimiento: %d / %d / %d",Registros[i].Dia,Registros[i].Mes,Registros[i].Year);
			printf("\n\t Facultad: %s",Registros[i].Facultad);
			printf("\n\t Carrera:  %s",Registros[i].Carrera);
			printf("\n\t Semestre: %s",Registros[i].Semetre);
			printf("\n\t Genero:   %s",Registros[i].Genero);
		}
	}
	
	
	
		
	return 0;
}
