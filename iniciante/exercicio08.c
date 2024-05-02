/*
	 8.	Implemente um algoritmo que imprima a soma de 10 números informados pelo usuário.
*/

#include <stdio.h>

	int main(){
		
		int i,numero,soma = 0;
		
		printf("Digite 10 numeros\n");
		
		for(i=1;i<11;i++){
			
			printf("Numero %d: ",i);
			scanf("%d", &numero);
			soma= numero + soma;			
		}
		
		printf("A soma dos numeros: %d", soma);
		
	}