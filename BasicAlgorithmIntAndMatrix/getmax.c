/*
 * file name: getmax.c
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Tue 01 Jan 2019 08:22:57 PM CST
 */

#include <stdio.h>
#include <stdlib.h>

#define N	5
int getmax(int A[], int n);

int main(void)
{
	int A[N] = {1, 200, 3, 400, 201};
	printf("Finite set's max element is: %d\n", getmax(A, N));
	return 0;
}

int getmax(int A[], int n)
{
	int max = A[0];
	int i;
	for (i = 1; i < n; i++)
		if (A[i] > max)
			max = A[i];
	return max;
}
