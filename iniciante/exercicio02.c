/*

   1. Implemente um alguritmo que receba um n�mero inteiro e imprima seu sucessor e o antecessor de um n�mero

*/

#include <stdio.h>

	int main(){
		
		int numero;
		
		printf("Insira um numero inteiro:\n");
		scanf("%d",&numero);
		
		int antecessor = numero - 1;
		int sucessor = numero + 1;
		
		printf("Antecessor:%d\n", antecessor);
		printf("Sucessor:%d", sucessor);
		
	}