/* 
Escreva uma função em C que receba uma matriz de inteiros e suas
dimensões (linhas e colunas) e retorne a soma de todos os elementos da
matriz (a função de soma deve ser criada fora da main para exercitar o
conteúdo).
*/

#include <stdio.h>

void matriz(){
	
	int M;
	int N;
	int i,j;
	int soma_matriz = 0;
	
	printf("Informe a quantidade de linhas:\n");
	scanf("%d", &M);
	printf("Informe a quantidaded de colunas:\n");
	scanf("%d", &N);
	
	int matriz[M][N];
	
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			printf("Informe o valor de [%d][%d]: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			soma_matriz += matriz[i][j];
		}
	}
	
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\nSoma dos elementos da matriz: %d", soma_matriz);
	
}

	int main()
	{
		matriz();
		return 0;
	}