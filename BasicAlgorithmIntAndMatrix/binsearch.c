/*
 * file name: binsearch.c
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Tue 01 Jan 2019 08:33:02 PM CST
 */

#include <stdio.h>
#include <stdlib.h>

#define N 	5

int binsearch(int A[], int n, int target);

int main(void)
{
	int A[N] = {1, 2, 3, 4, 10};
	
	printf("Found elements 10, index is %d\n", 
			binsearch(A, N, 10) + 1);
	return 0;
}

int binsearch(int A[], int n, int target)
{
	int i = 0;
	int j = n - 1;
	int index;
	int mid;
	while (i < j) {
		mid = (i + j) / 2;
		if (target > A[mid])
			i = mid + 1;
		else
			j = mid;
	}
	if (target == A[i])
		index = i;
	else
		index = 0;
	return index;
}
