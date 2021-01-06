#include <stdio.h>

int main(){
	int passo, i, j, linhas = 3, colunas = 4, flag = 0;
	double m, pivo = 0, aux;
	double matrix[3][4] = {
		{1, 3, 5, 0},
		{0, 1, 2, 5},
		{2, 4, 2, 2}
	};		
	
	for(passo = 0; passo < linhas; passo++){
		pivo = matrix[passo][passo];
		
		for(i = passo; i < linhas; i++){
			if(matrix[i][passo] > pivo){
				pivo = matrix[i][passo];
				flag = i;
			}
		}
		
		if(flag != 0){
			for(i = 0; i < colunas; i++){
				aux = matrix[passo][i];
				matrix[passo][i] = matrix[flag][i];
				matrix[flag][i] = aux;
			}
		}
		
		for(i = passo + 1; i < linhas; i++){
			m = matrix[i][passo] / pivo;
			matrix[i][passo] = 0;
			
			for(j = passo + 1; j < colunas; j++){
				matrix[i][j] = matrix[i][j] - (m * matrix[passo][j]);		
			} 
		}
		flag = 0;
	}
	
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			printf("%2.1f ", matrix[i][j]);
		}
		printf("\n");
	}
	
}