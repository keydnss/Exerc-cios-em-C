/*

	3. Implemente um algoritmo que calcule a idade de uma pessoa em dias, sendo que o valor
digitado para idade deverá ser uma idade completa (Ex. 25 anos). Se o usuario for menor de
idade imprimir (“Você é menor de idade”), se não (“Você é maior de idade”).

*/

#include <stdio.h>

int main(){
	
	int idade;
	
	printf("Digite sua idade:\n");
	scanf("%d", &idade);
	
	int emdias = idade*365;
	
	printf("Sua idade em dias: %d\n", emdias);
	
		if(emdias<6570){
			printf("Voce e menor de idade");
		}
		else
		{
			printf("Voce e maior de idade");
		}
	
}