#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printMatrix(int m[][100], int lin, int cols){
	for(int i = 0; i < lin; i++){
		for(int j = 0; j < cols; j++){
			printf("%d |", m[i][j]);
		}
		printf("\n");
	}
}

//------------------------------

void geraMatrix(int m[][100], int lin, int cols){
	srand(time(NULL));
	for(int i = 0; i < lin; i++){
		for(int j = 0; j < cols; j++){
			m[i][j] = rand()%51;
		}
	}
}

//------------------------------

void leiaMatrix(int m[][100], int lin, int cols){
	for(int i = 0; i < lin; i++){
		for(int j = 0; j < cols; j++){
			printf("Posicao[%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
}

//------------------------------

void carregaMatrix(int m[][100], int lin, int cols){
	FILE *arq;
	arq = fopen("numeros.txt", "r");
	
	if(arq == NULL){
		printf("Arquivo nao encontrado!\n");
	}
	
	for(int i = 0; i < lin; i++){
		for(int j = 0; j < cols; j++){
			fscanf(arq, "%d", &m[i][j]);
		}
	}
}

//------------------------------

int menorMatrix(int m[][100], int lin, int cols){
	int menor = m[0][0];
	
	for(int i = 0; i < lin; i++){
		for(int j = 0; j < cols; j++){
			if(m[i][j] < menor){
				menor = m[i][j];
			}
		}
	}
	
	return menor;
}

//------------------------------

int maiorMatrix(int m[][100], int lin, int cols){
	int maior = m[0][0];
	
	for(int i = 0; i < lin; i++){
		for(int j = 0; j < cols; j++){
			if(m[i][j] > maior){
				maior = m[i][j];
			}
		}
	}
	
	return maior;
}

//----------------------------------

int contaMatrix(int m[][100], int lin, int cols, int x){
	int qtd=0;
		for(int j=0;j<cols;j++){
			for(int i=0;i<lin;i++){
				if(m[i][j]==x){
					qtd++;
					
				}
			}
		}
	return qtd;
}
