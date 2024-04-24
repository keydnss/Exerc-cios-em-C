/*

Construa uma algoritmo que tenha como dados de entrada o sexo e a altura de uma pessoa
(M-masculino e F-feminino), e calcule seu peso ideal, utilizando as seguintes fórmulas:
    -Para homens: (72.7*h) – 58, onde h é altura
    -Para mulheres: (62.1*h) - 44.7

*/

#include <stdio.h>

int main () {

    char sexo;
    float h;

    printf("Informe o seu sexo (M- Masculino, F-Feminino):\n");
    scanf("%c", &sexo);
    printf("Informe a sua altura:\n");
    scanf("%f", &h);

        if (sexo == 'M')
        {
            float pesoidealM = (72.7*h)-58;
            printf("O seu peso ideal: %.2f",pesoidealM);
        }
        else if (sexo == 'F')
        {
            float pesoidealF = (62.1*h)-44.7;
            printf("O seu peso ideal: %.2f",pesoidealF);
        }
        

}