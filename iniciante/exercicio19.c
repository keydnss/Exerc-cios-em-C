/*
Implemente uma matriz de ordem 2 que seja informado valores negativos e que sejam
impressos somente valores negativos.
*/

#include <stdio.h>

int main()
{
	int matriz[2][2] = {{-1,3},{2,-4}};
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(matriz[i][j]>0){
				printf("%d ", matriz[i][j]);
			}else{printf("* ");}
		}
		printf("\n");
	}
	
	return 0;
}