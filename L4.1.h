#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int j;
	int linhas;
	int colunas;
	printf ("insira a quantidade de linhas da matriz\n"); 
	scanf ("%d",&linhas);
	printf ("insira a quantidade de colunas da matriz\n");
	scanf ("%d",&colunas);	
	
	printf ("insira a quantidade de colunas da matriz\n");
	
	int M[linhas][colunas];
	
	for (i = 0; i < linhas; i++) {
		for (j = 0; j < colunas; j++) {
		scanf ("%d",&M[i][j]);
		}
	}

	/* Aqui ele vai imprime as matriz*/
	printf ("Matriz\n");
	for (i = 0; i < linhas; i++) { /* Esse será o número de linhas */
		for (j = 0; j < colunas; j++) { /* Esse será o número de colunas por cada linha */
		printf ("%d ",M[i][j]); /* Imprime o valor da Matriz[i][j] */
		}
		printf ("\n"); /* Imprime uma nova linha */
	}
	printf ("Matriz transposta\n");
	for (i = 0; i < colunas; i++) { /* Esse será o número de linhas */
		for (j = 0; j < linhas; j++) { /* Esse será o número de colunas por cada linha */
		printf ("%d ",M[j][i]); /* Imprime o valor da Matriz[i][j] */
		}
		printf ("\n"); /* Imprime uma nova linha */
	}
}
