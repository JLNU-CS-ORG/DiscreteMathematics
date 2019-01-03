/*
 * file name: bininsert.c
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Tue 01 Jan 2019 09:22:22 PM CST
 */

#include <stdio.h>
#include <stdlib.h>

#define N	5
void bininsert(int A[], int len);

int main(void)
{
	int A[N] = {1, 2, 3, 4, 5};
	bininsert(A, N);
	for (int i = 0; i < N; i++)
		printf("%d ", A[i]);
	putchar('\n');
	return 0;
}

void bininsert(int A[], int n)
{
	int i;
	int k;
	for (i = 1; i < n; i++) {
		int m = A[i];
		int begin = 0;
		int end = i;
		while (begin < end) {
			int mid = (begin + end) / 2;
			if (m > A[mid])
				begin = mid + 1;
			else
				end = mid - 1;
		}
		for (k = begin; k < i; k++)
			A[k + 1] = A[k];
		A[begin] = m;
	}
}
