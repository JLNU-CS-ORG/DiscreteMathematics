/*
 * file name: basebexp.c
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Wed 02 Jan 2019 04:54:03 PM CST
 */

#include <stdio.h>
#include <stdlib.h>

void basebexp(int A[], int n, int b);
int calbinlen(int num, int b);
int modular_expon(int b, int A[], int m, int n);
int main(void)
{
	int N = calbinlen(7, 2);
	int *arr = (int*) malloc(sizeof(int) * N);
	basebexp(arr, 7, 2);
	int i;
	for (i = 0; i < 3; i++)
		printf("%d", arr[i]);
	putchar('\n');
	free(arr);
/*--------------------------split line----------------------------------*/
/*----------------------------------------------------------------------*/

	N = calbinlen(644, 2);
	int *arr1 = (int*) malloc(sizeof(int) * N);
	basebexp(arr1, 644, 2);
	int result = modular_expon(3, arr1, 645, N);
	printf("3^644 mod 645' result is %d\n", result);
	return 0;
}

void basebexp(int A[], int n, int b)
{
	int q = n;
	int k = 0;
	while (q != 0) {
		A[k] = q % b;
		q /= b;
		k++;
	}
}
int calbinlen(int num, int b)
{
	int k = 0;
	while (num != 0) {
		num /= b;
		k++;
	}
	return k;
}
int modular_expon(int b, int A[], int m, int n)
{
	int x = 1;
	int power = b % m;
	int i;
	for (i = 0; i < n; i++) {
		if (A[i] == 1)
			x = x * power % m;
		power = power * power % m;
	}
	return x;
}
