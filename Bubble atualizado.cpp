#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int numeros[TAM];

int main() {
	
	int i, j, k;

//Gerando numeros aleatorios e atribuindo as posicões no vetor 
	
	int gerandoaleatorio(int numeros, TAM);

	gerandoaleatorio(numeros);

	
//Ordenando os vetores 

    printf("\n\nOrdenando o vetor: \n\n\n");
    
	for (k=0; k < TAM ; k++){
		for (i=0; i<TAM-1 ; i++){
			if ( numeros[i] > numeros[i+1]){
				j = numeros [i];
				numeros[i] = numeros[i+1];
				numeros[i+1] = j;
			}	
		}
		for (i=0; i < TAM ; i++){
			printf("%d ", numeros[i]);
		}
		printf("\n");
	}
	printf("\n\nSequencia ordenada:\n\n");
	for (i=0; i < TAM ; i++){
			printf("%d ", numeros[i]);
	}
		
		
	
	return 0;
}

int gerandoaleatorio(int numeros, TAM){
	//Garantindo a aleatoriedade da rand()
	int i;
	srand(time(NULL)); 					
	
	printf("\nSequencia de numeros aleatorios: \n\n");
	for (i=0; i< TAM ; i++){
		
		numeros[i] = rand() % 1000 ;
		printf("%d ", numeros[i]);
	}
	
	return ();
	
}
