#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char caracter;
	while (caracter != 27){
		printf("insira o caractere \n");
		caracter = getch();
		printf("Caractere:   %c\n",caracter);
		printf("Decimal:     %d\n",caracter);
		printf("Hexadecimal: %x\n",caracter);
	}
}
