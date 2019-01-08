/*
 * file name: fact.c
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Thu 03 Jan 2019 06:02:12 PM CST
 */

#include <stdio.h>
#include <stdlib.h>

int fact(int n);

int main(void)
{
	printf("The %d fact is %d\n", 5, fact(5));
	return 0;
}

int fact(int n)
{
	if (n > 1)
		return n * fact(n - 1);
	return 1;
}
