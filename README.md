#include <iostream>
#include <stdio.h>


int main(int argc, char** argv) 
{
	char nome[50]; 
	unsigned int ag, cont, card, client; 
	

	printf("Ola somos do banco Bradwesad, por favor digite seu nome: \n");
	scanf("%s",nome);
	
	printf("Por favor digite sua agencia: \n");
	scanf("%u", & ag);
	
	printf("Por favor digite sua conta: \n");
	scanf("%u",& cont);
	
	printf("Por favor digite o numero do seu cartao: \n");
	scanf("%u",& card);
	
	printf("Nome: %s \n", nome);
	printf("Agencia: %u \n", ag);
	printf("Conta: %u \n", cont);
	printf("Cartao: %u \n", card);
	return 0;
}
