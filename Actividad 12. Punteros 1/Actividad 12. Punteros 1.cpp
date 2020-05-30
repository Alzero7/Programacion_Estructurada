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

char Datos_del_Estudiante(Datos *p);

int Fecha_Nacimiento(Datos *m);

char Datos_Profesionales(Datos *n);


int main()
{
	int Answer=0;
	int i=0;
	
	printf("\n\t Ingrese el numero de personas a capturar: ");
	scanf("%d",&Answer);
	
	Datos Registros[Answer+1];
	
	for(i=0;i<Answer;i++)
	{
		system("cls");
		fflush(stdin);
		
		Datos_del_Estudiante(&Registros[i]);
		
		Fecha_Nacimiento(&Registros[i]);
		
		Datos_Profesionales(&Registros[i]);
		
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


char Datos_del_Estudiante(Datos *p)
{
	
		printf("\n\t Ingrese su ID: ");
		gets(p->ID_estudiante);
		
		system("cls");
		fflush(stdin);
		
		printf("\n\t Ingrese su Nombre: ");
		gets(p->Nombre);
		
		system("cls");
		fflush(stdin);
		
		printf("\n\t Ingrese su Apellido Paterno: ");
		gets(p->Ap_Pat);
		
		system("cls");
		fflush(stdin);
		
		printf("\n\t Ingrese su Apellido Materno: ");
		gets(p->Ap_Mat);
		
		system("cls");
		fflush(stdin);
		
	return 0;
}

int Fecha_Nacimiento(Datos *m)
{
	int op=0;
	do
	{
		printf("\n\t Ingrese su Mes de Nacimiento: ");
		scanf("%d",&m->Mes);

		system("cls");
		fflush(stdin);
	}while(m->Mes<0 || m->Mes>12);
	
	op=0;
	do
	{
		printf("\n\t Ingrese su Dia de Nacimiento: ");
		scanf("%d",&m->Dia);

		system("cls");
		fflush(stdin);
		
		if((m->Mes==1 || m->Mes==3 || m->Mes==5 || m->Mes==7 || m->Mes==8 || m->Mes==10 || m->Mes==12) && (m->Dia>0 || m->Dia<=31))
		{
			op=1;
		}
		else
		{
			if((m->Mes==4 || m->Mes==6 || m->Mes==9 || m->Mes==11) && (m->Dia>0 || m->Dia<=30))
			{
				op=1;
			}
			else
			{
				if(m->Mes==2 && m->Dia==28)
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
		scanf("%d",&m->Year);

		system("cls");
		fflush(stdin);
		
		if(m->Year<1950 || m->Year>2019)
		{
			op=1;
		}
	}while(op==1);
		
	return 0;
}

char Datos_Profesionales(Datos *n)
{
	printf("\n\t Ingrese su Facultad: ");
	gets(n->Facultad);
	
	system("cls");
	fflush(stdin);
	
	printf("\n\t Ingrese su Carrera: ");
	gets(n->Carrera);
	
	system("cls");
	fflush(stdin);
	
	printf("\n\t Ingrese su Semestre: ");
	gets(n->Semetre);
	
	system("cls");
	fflush(stdin);
	
	printf("\n\t Ingrese su Genero: ");
	gets(n->Genero);
	
	system("cls");
	fflush(stdin);
	
	return 0;
}


