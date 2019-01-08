/*
 * file name: closure.c
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Tue 08 Jan 2019 05:09:48 PM CST
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROW	3
#define COL 	3

int MR[ROW][COL] = {
	{1, 0, 1},
	{0, 1, 0},
	{1, 1, 0},
};
int** closure(int MR[ROW][COL]);
void mulbool(int A[ROW][COL], int MR[ROW][COL]);
void matrixand(int **tmp, int A[ROW][COL]);

int main(void)
{
	int **result = closure(MR);
	int i, j;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++)
			printf("%d ", result[i][j]);
		printf("\n");
	}
	exit(0);
}

int** closure(int MR[ROW][COL])
{
	int **tmp = (int**) malloc(sizeof(int*) * ROW);
	int i, j;
	for (i = 0; i < COL; i++)
		*(tmp + i) = (int*) malloc(sizeof(int) * COL);
	int A[ROW][COL];

	for (i = 0; i < ROW; i++)
		for (j = 0; j < COL; j++)
			A[i][j] = MR[i][j];
	for (i = 0; i < ROW; i++)
		for (j = 0; j < COL; j++)
			tmp[i][j] = A[i][j];
	for (i = 1; i < COL; i++) {
		mulbool(A, MR);
		matrixand(tmp, A);
	}
	return tmp;
}
void mulbool(int A[ROW][COL], int MR[ROW][COL])
{
	int i, j, k;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < ROW; j++) {
			for (k = 0; k < COL; k++) {
				A[i][j] = A[i][j] | (A[i][k] & MR[k][j]);
			}
		}
	}
}
void matrixand(int **tmp, int A[ROW][COL])
{
	int i, j;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			tmp[i][j] = tmp[i][j] | A[i][j];
		}
	}
}
