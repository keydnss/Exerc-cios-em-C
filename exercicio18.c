/*

Implemente uma matriz de ordem 3 que imprima os valores da diagonal secundária

*/


#include <stdio.h>

int main()
{
	int matriz[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	int i,j;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i==j){
				printf("%d ", matriz[i][j]);
			}else{printf("* ");}
		}
		printf("\n");
	}
	
	return 0;
}