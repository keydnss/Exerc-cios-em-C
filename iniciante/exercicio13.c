/*
	 12. Desenvolva um algoritmo capaz calcular a raiz quadrada de um determinado n�mero 
	 e verificar enquanto o valor informado n�o for um n�mero negativo o programa continuar�
	 executando.
*/

#include <stdio.h>
#include <math.h>

	int main(){
		
	   	double numero;
		double raiz;
		
		while(numero>0)
		{
			
			printf("Insira um numero:\n");
			scanf("%lf", &numero);
		
				if(numero<0){
					printf("Insira um numero positivo");
					break;
				}
				
			raiz = sqrt(numero);
			printf("Sua raiz quadrada:%.2lf\n\n", raiz);

		}	
	}  