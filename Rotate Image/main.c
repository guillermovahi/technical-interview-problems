#include <stdio.h>
#include <stdlib.h>

void rotate(int **matrix, int matrixSize, int *matrixColSize)
{
	int **matrix_aux = (int **) malloc(matrixSize * sizeof(int *));
	
	//Copia original en un auxiliar
	for(int i = 0; i < matrixSize; i++)
	{
		matrix_aux[i] = (int *) malloc( *matrixColSize * sizeof(int));	
		for(int j = 0; j < *matrixColSize; j++)
			matrix_aux[i][j] = matrix[i][j];
	}

	int new_i;
	int new_j = *matrixColSize - 1;

	for(int i = 0; i < matrixSize; i++)
	{
		new_i = -1;
		for(int j = 0; j < *matrixColSize; j++)
			matrix[++new_i][new_j] = matrix_aux[i][j];
		new_j--;
	}
}