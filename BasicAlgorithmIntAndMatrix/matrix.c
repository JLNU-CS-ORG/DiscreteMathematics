/*
 * file name: matrix.c
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Wed 02 Jan 2019 09:34:46 PM CST
 */

#include <stdio.h>
#include <stdlib.h>

int **matadd(int A[][2], int B[][2], int rows, int cols);
int **matmul(int **A, int **B, int arows, int acols, int bcols);
void mattrans(int A[2][3], int B[3][2]);

int main(void)
{
	int A[2][2] = { {1, 2}, {3, 4} };
	int **C = matadd(A, A, 2, 2);
	int i, j;
	
	printf("----------Matrix Add-------------\n");
	printf("Origin matrix:\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++)
			printf("|%d ", A[i][j]);
		printf("|\n");
	}
	printf("Result matrix:\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++)
			printf("|%d ", C[i][j]);
		printf("|\n");
	}
	free(C);
	printf("----------Matrix Mul-------------\n");
	int **D = (int**) malloc(sizeof(int*) * 4);
	for (i = 0; i < 4; i++)
		*(D + i) = (int*) malloc(sizeof(int*) * 3);
	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			D[i][j] = 1;
	
	int **E = (int**) malloc(sizeof(int*) * 3);
	for (i = 0; i < 3; i++)
		*(E + i) = (int*) malloc(sizeof(int*) * 2);
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			E[i][j] = 2;
	
	int **F = matmul(D, E, 4, 3, 2);
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++) {
			printf("|%d ", F[i][j]);
		}
		printf("|\n");
	}
	free(F);
	free(E);
	free(D);
	printf("----------Matrix trans-----------\n");
	
	int G[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int H[3][2] = { {0}, {0}, {0} };
	mattrans(G, H);
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++)
			printf("|%d ", H[i][j]);
		printf("|\n");
	}
	return 0;
}	

int **matadd(int A[][2], int B[][2], int rows, int cols)
{
	int **C = (int**) malloc(sizeof(int*) * rows);
	int i, j; 
	for (i = 0; i < rows; i++) {
		C[i] = (int*) malloc(sizeof(int) * cols);
		for (j = 0; j < cols; j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	return C;
}
int **matmul(int **A, int **B, int arows, int acols, int bcols)
{
	int **C = (int**) malloc(sizeof(int*) * arows);
	int i, j, k;
	for (i = 0; i < arows; i++)
		*(C + i) = (int*) malloc(sizeof(int*) * bcols);
	for (i = 0; i < arows; i++) {
		for (j = 0; j < bcols; j++) {
			C[i][j] = 0;
			for (k = 0; k < acols; k++) {
				C[i][j] = C[i][j] + A[i][k] * B[k][j];
			}
		}
	}
	return C;
}
void mattrans(int A[2][3], int B[3][2])
{
	int i, j;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			B[j][i] = A[i][j];
		}
	}
}
