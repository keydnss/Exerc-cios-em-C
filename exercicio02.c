/*

   2. Implemente um algoritmo que receba um número inteiro e imprima o seu sucessor e antecessor.

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
