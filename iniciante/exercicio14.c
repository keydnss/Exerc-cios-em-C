/*
	14. Implemente um algoritmo utilizando a estrutura de repetição DO WHILE, para navegar em um MENU qualquer.
*/

#include <stdio.h>

	int main(){
		
		int opcao;
		
		do{
			printf("MENU:\n");
			printf("1-Jogar\n");
			printf("2-Opcoes\n");
			printf("3-Sair\n");
			scanf("%d", &opcao);
		
			switch(opcao){
				case 1:
				   	printf("Opcao jogar\n\n");
				   	break;
				case 2:
				   	printf("Menu de opcoes\n\n");
				   	break;
   				case 3:
				   	printf("Saindo do progama...\n");
					break;      
				default:
				   	printf("opcao invalida\n\n");
				   	break;
			}
		} while(opcao!=3);	  		
	}