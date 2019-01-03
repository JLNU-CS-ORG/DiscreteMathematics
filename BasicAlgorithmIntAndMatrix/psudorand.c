/*
 * file name: psudorand.c
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Wed 02 Jan 2019 01:20:03 PM CST
 */

#include <stdio.h>
#include <stdlib.h>

static int s_seed;
static int xn;
void sprand(int seed);
int prand();

int main(void)
{
	int i;
	sprand(3);
	for (i = 0; i < 10; i++)
		printf("%d\n", prand());
	return 0;
}
int prand()
{	
	xn = ((7 * xn) + 4) % 9;
	return xn;
}
void sprand(int seed)
{
	s_seed = seed;
	xn = s_seed;
}
