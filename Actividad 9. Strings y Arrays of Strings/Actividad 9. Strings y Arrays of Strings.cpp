#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	system("color 0B");
	
	char ID_estudiante[4]=" ";
	char Nombre[25]=" ";
	char Ap_Pat[25]=" ";
	char Ap_Mat[25]=" ";
	char Dia_Nacimiento[3]=" ";
	char Mes_Nacimiento[3]=" ";
	char Year_Nacimiento[3]=" ";
	char Facultad[50]=" ";
	char Carrera[50]=" ";
	char Semestre[3]=" ";
	char Genero[12]=" ";
	int ID=0;
	int Answer=0;
	int i=0;
	int z=0;
	int num1=0;
	int num2=0;
	int num3=0;
	int num4=0;
	
	printf("\n\t Ingrese la cantidad de personas a registrar:  ");
	scanf("%d",&Answer);
	Answer=Answer*7;
	char Registros[Answer][150]={""};
	do
	{
		do
		{
			system("cls");
			printf("\n\t Ingrese su ID:  ");
			scanf("%d",&ID);
		}while(ID<1000 || ID>9999);
		
		sprintf(ID_estudiante,"%d",ID);
		
		system("cls");
		fflush(stdin);
		
		printf("\n\t Ingrese su nombre:  ");
		scanf("%[^\n]",Nombre);
		
		system("cls");
		fflush(stdin);
		
		printf("\n\t Ingrese su apellido paterno:  ");
		scanf("%[^\n]",Ap_Pat);
		
		system("cls");
		fflush(stdin);
		
		printf("\n\t Ingrese su apellido materno:  ");
		scanf("%[^\n]",Ap_Mat);
		
		system("cls");
		fflush(stdin);
		
		do
		{
			system("cls");
			printf("\n\t Ingrese el numero del mes en que nacio:  ");
			scanf("%d",&num1);
		}while(num1<1 || num1>12);
		
		sprintf(Mes_Nacimiento,"%d",num1);
		
		system("cls");
		fflush(stdin);
		z=0;
		
		do
		{
			do
			{
				system("cls");
				fflush(stdin);
				printf("\n\t Ingrese el numero del dia en que nacio:  ");
				scanf("%d",&num2);
				fflush(stdin);
			}while(num2<1 || num2>31);
			if((num1==1 || num1==3 || num1==5 || num1==7 || num1==8 || num1==10 || num1==12) && num2<32)
			{
				z=1;
			}
			if((num1==4 || num1==6 || num1==9 || num1==11) && num2<31)
			{
				z=1;
			}
			if((num1==2) && num2<29)
			{
				z=1;
			}
		}while(z==0);
		
		sprintf(Dia_Nacimiento,"%d",num2);
		
		system("cls");
		fflush(stdin);
		
		do
		{
			system("cls");
			printf("\n\t Ingrese el a%co en que nacio:  ",164);
			scanf("%d",&num3);
		}while(num3<1950||num3>2020);
		
		fflush(stdin);
		sprintf(Year_Nacimiento,"%d",num3);
		
		system("cls");
		fflush(stdin);
		
		printf("\n\t Ingrese el nombre de la Facultad en donde estudia: ");
		gets(Facultad);
		
		system("cls");
		fflush(stdin);
		
		printf("\n\t Ingrese el nombre de la Carrera que estudia: ");
		gets(Carrera);
		
		system("cls");
		fflush(stdin);
		
		do
		{
			system("cls");
			printf("\n\t Ingrese el semestre que cursa: ");
			scanf("%d",&num4);
		}while(num4<1 && num4>10);
		
		sprintf(Semestre,"%d",num4);
		
		system("cls");
		fflush(stdin);
		
		printf("\n\t Ingrese su genero: ");
		gets(Genero);
		
		system("cls");
		fflush(stdin);
		
		strcat(Registros[i],"ID: ");
		strcat(Registros[i],ID_estudiante);
		strcat(Registros[i+1],"Nombre: ");
		strcat(Registros[i+1],Nombre);
		strcat(Registros[i+1]," ");
		strcat(Registros[i+1],Ap_Pat);
		strcat(Registros[i+1]," ");
		strcat(Registros[i+1],Ap_Mat);	
		strcat(Registros[i+2],"Fecha de Nacimiento:");
		strcat(Registros[i+2],Dia_Nacimiento);
		strcat(Registros[i+2],"/");
		strcat(Registros[i+2],Mes_Nacimiento);
		strcat(Registros[i+2],"/");
		strcat(Registros[i+2],Year_Nacimiento);
		strcat(Registros[i+3],"Escuela: ");
		strcat(Registros[i+3],Facultad);
		strcat(Registros[i+4],"Carrera: ");
		strcat(Registros[i+4],Carrera);
		strcat(Registros[i+5],"Semestre: ");
		strcat(Registros[i+5],Semestre);
		strcat(Registros[i+6],"Genero: ");
		strcat(Registros[i+6],Genero);
		
		if(i>0)
		{
			for(int j=0;j<i;j=j+7)
			{
				if(strncmp(Registros[i],Registros[j],8)==0)
				{
					memset(Registros[i],0,150);
					memset(Registros[i+1],0,150);
					memset(Registros[i+2],0,150);
					memset(Registros[i+3],0,150);
					memset(Registros[i+4],0,150);
					memset(Registros[i+5],0,150);
					memset(Registros[i+6],0,150);
					memset(Registros[j],0,150);
					memset(Registros[j+1],0,150);
					memset(Registros[j+2],0,150);
					memset(Registros[j+3],0,150);
					memset(Registros[j+4],0,150);
					memset(Registros[j+5],0,150);
					memset(Registros[j+6],0,150);
				}
			}
		}
		i=i+7;
	}while(i<(Answer));
	
	system("cls");
	for(i=0;i<Answer;i++)
	{
		if(strcmp(Registros[i],"")==0)
		{
			i=i;
		}
		else
		{
			printf("\n\t ");
			printf("%s",Registros[i]);
		}
	}
	return 0;
}
