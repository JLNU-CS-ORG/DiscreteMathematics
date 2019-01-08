/*
 * file name: matRrelation.c
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Tue 08 Jan 2019 04:04:08 PM CST
 */

#include <stdio.h>
#include <stdlib.h>

#define ROW	3
#define COL 	2

int A[ROW] = {1, 2, 3};
int B[COL] = {1, 2};

int main(void)
{
	int R[ROW][COL] = {{0}, {0}, {0}};
	int i, j;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			if (A[i] > B[j])
				R[i][j] = 1;
			else
				R[i][j] = 0;
		}
	}
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++)
			printf("%d ", R[i][j]);
		printf("\n");
	}
	exit(0);
}
