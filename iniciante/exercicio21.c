/*

	Construa duas matrizes tridimensionais que receba valores inteiros e imprima em uma terceira matriz a soma desses valores digitados. 

*/


#include <stdio.h>

int main()
{
	int matriz1[2][3][3];
	int matriz2[2][3][3];
	int matriz3[2][3][3];
	int i,j,k;
	
	printf("Construindo a Matriz 1:\n");
	for(k=0;k<2;k++){
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("Informe o valor [%d][%d][%d]: ", k+1, i+1, j+1);
				scanf("%d", &matriz1[k][i][j]);
			}
		}
	}
	
	printf("Construindo a Matriz 2:\n");
	for(k=0;k<2;k++){
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("Informe o valor [%d][%d][%d]: ", k+1, i+1, j+1);
				scanf("%d", &matriz2[k][i][j]);
			}
		}
	}
	
	for(k=0;k<2;k++){
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				matriz3[k][i][j] = matriz1[k][i][j] + matriz2[k][i][j];
			}
		}
	}
	
	printf("Matriz que representa a soma dos valores digitados: \n");
	for(k=0;k<2;k++){
		printf("Nivel %d:\n", k+1);
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%d ", matriz3[k][i][j]);
			}
			printf("\n");
		}
	}
		
	return 0;
}