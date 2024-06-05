#include <stdio.h>
#define M 4
#define N 3

int main()
{
	int matriz [M][N];
	int i;
	int j;
	float total = 0;
	float somalinha;
	
	for(i=0; i<M; i++){
		for(j=0;j<N; j++);{
			printf("matriz[%d][%d] = ", i, j);
			scanf("%d", &matriz[i][j]);
			}
	}	
	for(i=0;i<M;i++);{
		for(j=0;j<N;j++);{
			printf("%4d", matriz[i][j]);
		}
		printf("\n");
	}	
	
	return 0;
}