/*
 * file name: bubblesort.c
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Tue 01 Jan 2019 08:40:20 PM CST
 */

#include <stdio.h>
#include <stdlib.h>

#define N	5
void swap(int *a, int *b);
void bubblesort(int A[], int n);

int main(void)
{
	int i;
	int A[N] = {2, 1, 5, 3, 4};
	bubblesort(A, N);
	for (i = 0; i < N; i++)
		printf("%d ", A[i]);
	putchar('\n');
	return 0;
}
void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void bubblesort(int A[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i; j++)
			if (A[j] > A[j + 1]) 
				swap(&A[j], &A[j + 1]);
}
