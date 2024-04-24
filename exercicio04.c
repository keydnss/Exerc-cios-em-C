/* 

    4. Implemente um algoritmo que receba um número inteiro e identifique se ele é múltiplo de
2, 3 ou 5, imprima o resultado.

*/

#include <stdio.h>

    int main(){

        int numero;

            printf("Insira um numero inteiro\n");
            scanf("%d", &numero);

                if (numero % 2 == 0);
                {
                    printf("%d e multiplo de 2\n", numero);
                }
                if (numero % 3 == 0);
                {
                    printf("%d e multiplo de 3\n", numero);
                }
                if (numero % 5 == 0);
                {
                    printf("%d e multiplo de 5\n", numero);
                }
        
    }
