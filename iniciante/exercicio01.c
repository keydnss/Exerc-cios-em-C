/*
   1. Implemente um Algoritmo que Dado um n�mero inteiro no formato CDU(Centena, 
Dezena e Unidade), exibir o n�mero no formato UDC(Unidade, Dezena e Centena). 

Exemplo: 123, ser� 321.

O n�mero dever� ser atribu�do a uma vari�vel antes de ser exibido.

*/
	#include <stdio.h>

	int numeroCDU, numeroUDC, centena, dezena, unidade;
	
	int main()
	{
		
		printf("Insira um numero de 3 algarismos no formato CDU!\n");
		scanf("%d", &numeroCDU);
		
		centena = numeroCDU /100;
		dezena = (numeroCDU % 100)/10;
		unidade = numeroCDU % 10;
		
		numeroUDC = (unidade*100) + (dezena *10) + centena;
		
		printf("O numero no formato UDC fica: %d\n", numeroUDC);

	}
