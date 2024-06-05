/*

	Escreva um código que peça pro usuário escolher a linha de uma matriz e multiplicar a linha
	por uma constante.
	
*/

#include <stdio.h>

	int main()
	{
		int matriz[3][3] = {{1,2,3},{3,2,1},{1,2,3}};
		int l;
		int c;
		int i,j;
		
		printf("Matriz Inicial:\n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%d ", matriz[i][j]);
			}
			printf("\n");
		}
		
		printf("\nInforme uma linha da matriz:\n");
		scanf("%d", &l);
		printf("Informe um valor constante:\n");
		scanf("%d", &c);
		printf("\n");
		
		l -= 1;
		
		//Multiplicar elementos da linha pelo valor constante:
			for(j=0;j<3;j++){
				matriz[l][j] = matriz[l][j]*c;
			}
			
		//Imprima a matriz resultante:
			printf("Matriz Resultante:\n");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("%d ", matriz[i][j]);
				}
				printf("\n");
			}   		
		return 0;
	}