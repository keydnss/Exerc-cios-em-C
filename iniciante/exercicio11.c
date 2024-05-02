/*
	 10. Implemente um algoritmo que seja capaz de imprimir os mútiplos de 3 existentes entre 0 e 150.
*/

#include <stdio.h>

	int main(){
		
		int i;
		
		for(i=3;i<151;i++){
						
			if(i%3==0){
				printf("%d\n", i);
			}			
		}		
	}  