/*
 * file name: insertsort.c
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Tue 01 Jan 2019 08:46:09 PM CST
 */

#include <stdio.h>
#include <stdlib.h>

#define N	5
void insertsort(int A[], int n);

int main(void)
{
	int i;
	int A[N] = {3, 2, 4, 1, 5};
	insertsort(A, N);
	for (i = 0; i < N; i++)
		printf("%d ", A[i]);
	putchar('\n');
	return 0;
}
void insertsort(int A[], int n)
{
	int i;
	int k;
	for (i = 1; i < n; i++) {
		int j = 0;
		while (A[i] > A[j])
			j += 1;
		int m = A[i];
		for (k = 0; k < i - j; k++)
			A[i - k] = A[i - k - 1];
		A[j] = m;

	}
}
