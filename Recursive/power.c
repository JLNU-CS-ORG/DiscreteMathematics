/*
 * file name: power.c
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Thu 03 Jan 2019 07:03:11 PM CST
 */

#include <stdio.h>
#include <stdlib.h>

int power(int a, int n);
int main(void)
{
	printf("The %d's power is %d\n", 10, power(2, 10));
	return 0;
}
int power(int a, int n)
{
	if (n > 0)
		return a * power(a, n - 1);
	return 1;
}
