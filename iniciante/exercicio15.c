#include <stdio.h>

	int main(){
		
		char nome;
		char sexo;
		int idade;
		int quantidade;
		
		printf("Informe a quantidade de alunos:\n");
	   	scanf("%d", &quantidade);
	   	printf("\n");
		
		for(quantidade=quantidade; quantidade>0; quantidade--){
			printf("Insira o nome do aluno:\n");
			scanf("%s", &nome);
			printf("Insira o genero do aluno (M ou F):\n");
			scanf("%s", &sexo);
			printf("Insira a idade do aluno:\n");
			scanf("%d", &idade);
			printf("\n");
		}
		
		printf("Cadastro finalizado.\n");	
	}