#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cont, contTot;
	bool branco = true;
	while (contTot <= 8){
		while (cont <= 7){
			if (branco){
				printf("%c", 219);
			}
			else{
				printf("%c", 00);
			}
			branco = !branco;
			cont++;
		}
		cont = 0;
		branco = !branco;
		contTot++;
		printf("\n");
	}
}
