#include <stdio.h>
#include <stdlib.h>
#include <time.h>

# define TAM 1000

int main() {
	int numeros[TAM];
	int i, j, b, aux;
	int ordem = 0;
	

//Gerando numeros aleatorios e atribuindo as posicões no vetor 
	
	
	srand(time(NULL)); //Garantindo a aleatoriedade da rand()
	printf("\nSequencia aleatoria:\n\n");
	
	for (i=0; i< TAM ; i++){
		
		numeros[i] = rand() % 1000 ;
		printf("%d ", numeros[i]);
	
	}
	printf("\n\n");
	printf("Ordenando:\n\n");

//Ordenando os vetores

	for(j=0; j< TAM; j++){
		for (i=ordem; i < TAM; i++){
			if ( numeros [j] > numeros [i]){
				aux = numeros[j];
				numeros[j]= numeros [i];
				numeros[i]= aux;
				
			}
			
		}
		ordem += 1;
		for (b=0; b < TAM ; b++){
			printf("%d ", numeros[b]);
		}
		printf("\n");
	}
	printf("\n\nSequencia ordenada:\n\n");
	for (b=0; b < TAM ; b++){
			printf("%d ", numeros[b]);
	}
	
	return 0;
} 
