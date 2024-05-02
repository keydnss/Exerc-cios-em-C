/*
	 10.	Implemente um algoritmo que seja capaz de imprimir somente os números ímpares existentes entre 0 e 200.
*/

#include <stdio.h>

	int main(){
		
		int i;
		
		for(i=0;i<201;i++){
						
			if(i%2==1){
				printf("%d\n", i);
			}			
		}		
	}  