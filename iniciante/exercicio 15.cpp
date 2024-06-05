/*

	Faça um programa em C que forme uma matriz, somando outras duas.
		
*/


#include <stdio.h>

int main()
{
	int matriz1[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
	int matriz2[3][3] = {{3,2,1},{3,2,1},{3,2,1}};
	int matrizsoma[3][3];
	int i, j;
	
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				matrizsoma[i][j] = matriz1[i][j] + matriz2[i][j];
			}
		}
		
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%d ", matrizsoma[i][j]);
			}
			printf("\n");
		}	
	return 0;
}