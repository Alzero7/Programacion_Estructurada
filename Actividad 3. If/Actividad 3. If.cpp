#include<stdio.h>
#include<stdlib.h>

	/*	printf("Character entered: ");
    	putchar(c);	
	*/

int main()
{
	system("color 0B");

	char c;
 
    printf("\n\t Introduce un caracter: ");
    c = getchar();
	fflush(stdin);

	int a = (int) c;
	
	printf("\n\t ");
	system("pause");
	system("cls");
 
    if(c>=65 && c<=90)
	{
		printf("\n\t El caracter es alfabetico y es mayuscula\n\n\t c = %c",a);
	}
	else
	{			
		if(c>=97 && c<=122)
		{
			printf("\n\t El caracter es alfabetico y es minuscula\n\n\t c = %c",a);
		}
		else
		{
			if(c>='0')
			{
				printf("\n\t El caracter es numerico \n\n\t c = %c",a);
			}
			else
			{
				printf("\n\t El caracter es un simbolo\n\n\t c = %c",a);
			}
		}
	}

	
	return 0;
}
