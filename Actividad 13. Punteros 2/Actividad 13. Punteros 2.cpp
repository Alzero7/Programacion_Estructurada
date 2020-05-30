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
	int Numero_Carrera;
	char Semetre[50];
	char Genero[12];
	int Numero_Genero;
};
	
typedef struct Informacion_Estudiante  Datos;	

char Datos_del_Estudiante(Datos *p);

int Fecha_Nacimiento(Datos *m);

char Datos_Profesionales(Datos *n);


int main()
{
	int Answer=0;
	int i=0;
	int Numero_alumnos=0;

	printf("\n\t Ingrese el numero de personas a capturar: ");
	scanf("%d",&Answer);
	
	Datos Registros[Answer+1];
	
	for(i=0;i<Answer;i++)
	{
		system("cls");
		fflush(stdin);
		
		Numero_alumnos++;
		
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
					Registros[i].Numero_Carrera=0;
					Registros[i].Numero_Genero=0;
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
					Registros[j].Numero_Carrera=0;
					Registros[j].Numero_Genero=0;
					Numero_alumnos=Numero_alumnos-2;
				}
			}
		}
	}
	
	int LCC=0;
	int LA=0;
	int LMAD=0;
	int LM=0;
	
	int Men=0;
	int Fem=0;
	
	printf("\n\t El numero de estudiantes registrados fue:  %d\n\n\n\n ",Numero_alumnos);
	system("pause");
	system("cls");	
	
	for(i=0;i<Answer;i++)
	{
		if(Registros[i].Numero_Carrera==1)
		{
			LA++;
		}
		if(Registros[i].Numero_Carrera==2)
		{
			LCC++;
		}
		if(Registros[i].Numero_Carrera==3)
		{
			LMAD++;
		}
		if(Registros[i].Numero_Carrera==4)
		{
			LM++;
		}
		if(Registros[i].Numero_Genero==1)
		{
			Men++;
		}
		if(Registros[i].Numero_Genero==2)
		{
			Fem++;
		}
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
	printf("\n\n\n\n ");
	system("pause");
	system("cls");
	
	printf("\n\t El numero de estudiantes de cada carrera fue:\n\n\t LA = %d\n\t LCC = %d\n\t LMAD = %d\n\t LM = %d\n\n\n\n",LA,LCC,LMAD,LM);
	printf("\n\n\t El total de estuciantes por genero fue:\n\n\t Hombres =  %d\n\t Mujeres =  %d",Men,Fem);
	
		
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
	int num1=0;
	int num2=0;
	int num3=0;
	
	do
	{
		system("cls");
		printf("\n\t Ingrese su Facultad:\n\t 1) Facultad de Ciencias Fisico Matematicas\n\n\t ");
		scanf("%d",&num1);
	}while(num1!=1);
	
	strcpy(n->Facultad,"Facultad de Ciencias Fisico Matematicas");
	
	system("cls");
	fflush(stdin);
	
	printf("\n\t Ingrese su Carrera:\n\n\t 1) Licenciado en Actuaria\n\t 2) Licenciado en Ciencias Computacionales\n\t 3) Licenciado en Multimedia y Animacion Digital\n\t 4) Licenciado en Matematicas\n\n\t ");
	scanf("%d",&num2);
	
	switch(num2)
	{
		case 1:
			strcpy(n->Carrera,"Licenciado en Actuaria");
			n->Numero_Carrera=1;
			break;
		
		case 2:
			strcpy(n->Carrera,"Licenciado en Ciencias Computacionales");
			n->Numero_Carrera=2;
			break;
			
		case 3:
			strcpy(n->Carrera,"Licenciado en Multimedia y Animacion Digital");
			n->Numero_Carrera=3;
			break;
			
		case 4:
			strcpy(n->Carrera,"Licenciado en Matematicas");
			n->Numero_Carrera=4;
			break;
	}
	
	system("cls");
	fflush(stdin);
	
	printf("\n\t Ingrese su Semestre: ");
	gets(n->Semetre);
	
	system("cls");
	fflush(stdin);
	
	do
	{
		printf("\n\t Ingrese su Genero:\n\n\t 1) Masculino\n\t 2) Femenino\n\n\t ");
		scanf("%d",&num3);
	}while(num3<1 || num3>2);
	
	if(num3==1)
	{
		strcpy(n->Genero,"Masculino");
	}
	else
	{
		strcpy(n->Genero,"Femenino");
	}
	n->Numero_Genero=num3;
	
	system("cls");
	fflush(stdin);
	
	return 0;
}


