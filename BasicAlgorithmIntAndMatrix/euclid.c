/*
 * file name: euclid.c
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Wed 02 Jan 2019 09:01:19 PM CST
 */
#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);
int main(void)
{
	printf("The gcd between 414 and 662 is: %d\n",
			gcd(414, 662));
	return 0;
}

int gcd(int a, int b)
{
	int x = a;
	int y = b;
	while (y != 0) {
		int r = x % y;
		x = y;
		y = r;
	}
	return x;
}
