/*
 * file name: fibnocci.c
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Tue 08 Jan 2019 09:19:23 AM CST
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double fibnocci(int n);
int fibnocci_rec(int n);
int main(void)
{
	int i = 0;
	for (i = 0; i < 20; i++) 
		printf("%lf %d\n", fibnocci(i), fibnocci_rec(i));
	return 0;
}

double fibnocci(int n)
{
	double a1 = 1 / sqrt(5);
	double a2 = -1 / sqrt(5);
	return (double)(a1 * pow(((1 + sqrt(5)) / 2), n) + a2 * pow(((1 - sqrt(5)) / 2), n));
}
int fibnocci_rec(int n)
{
	if (n == 0)
		return 0;
	if (n > 0)
		return fibnocci_rec(n - 1) + fibnocci_rec(n - 2);
	return 1;
}
