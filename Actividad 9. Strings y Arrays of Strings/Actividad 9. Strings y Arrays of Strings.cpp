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
	int ID=0;
	int Answer=0;
	int i=0;
	int z=1;
	
	printf("\n\t Ingrese la cantidad de personas a registrar:  ");
	scanf("%d",&Answer);
	
	char Registros[Answer][50]={""};
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
		
		strcat(Registros[i],ID_estudiante);
		strcat(Registros[i],"  ");
		strcat(Registros[i],Nombre);
		strcat(Registros[i]," ");
		strcat(Registros[i],Ap_Pat);
		strcat(Registros[i]," ");
		strcat(Registros[i],Ap_Mat);	
		
		if(i>0)
		{
			for(int j=0;j<i;j++)
			{
				if(strncmp(Registros[i],Registros[j],4)==0)
				{
					memset(Registros[i],0,50);
					memset(Registros[j],0,50);
				}
			}
		}
		i++;
	}while(i<Answer);
	
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
