/*
	 9.	Implemente um algoritmo que seja capaz de imprimir somente os números pares existentes entre 0 e 200.
*/

#include <stdio.h>

	int main(){
		
		int i;
		
		for(i=0;i<201;i++){
						
			if(i%2==0){
				printf("%d\n", i);
			}			
		}		
	}  