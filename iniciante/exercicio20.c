/*

	Desenvolva uma matriz bidimensional que possa imprimir valores informados dividido por 2.

*/


#include <stdio.h>

int main()
{
	int l,c;
	
	printf("Informe o numero de linhas: ");
	scanf("%d", &l);
	printf("Informe o numero de colunas: ");
	scanf("%d", &c);
	
	float matriz1[l][c];
	
	int i,j;
	
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf("Insira o valor de [%d][%d]: ", i+1, j+1);
			scanf("%f", &matriz1[i][j]);
			matriz1[i][j] = matriz1[i][j]/2;
		}
	}
	
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf("%.2f ", matriz1[i][j]);
		}
		printf("\n");
	}
	
}