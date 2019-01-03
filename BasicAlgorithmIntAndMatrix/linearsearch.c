/*
 * file name: linearsearch.c
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Tue 01 Jan 2019 08:27:06 PM CST
 */

#include <stdio.h>
#include <stdlib.h>

#define N	5

int linearsearch(int A[], int n, int target);

int main(void)
{
	int A[N] = {1, 2, 3, 4, 5};
	int index;
	if ((index = linearsearch(A, N, 4)))
		printf("Found element, index is %d\n", index + 1);
	return 0;
}

int linearsearch(int A[], int n, int target)
{
	int i = 0;
	int index;
	while (i < n && A[i] != target)
		i += 1;
	if (i < n)
		index = i;
	else
		index = 0;
	return index;
}
