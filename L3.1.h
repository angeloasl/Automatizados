#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char caracter;
	while(1)
	{
		caracter = getch();
		if (caracter == 32)
		{
			printf("\a");
		}
	}
}
