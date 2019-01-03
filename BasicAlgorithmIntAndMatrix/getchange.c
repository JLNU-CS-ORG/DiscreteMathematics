/*
 * file name: getwell.c
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Tue 01 Jan 2019 09:06:40 PM CST
 */

#include <stdio.h>
#include <stdlib.h>

#define N	4
void change(int S[], int len, int n);

int main(void)
{
	int S[N] = {25, 10, 5, 1};
	change(S, 4, 51);
	return 0;
}

void change(int S[], int len, int n)
{
	int i;
	for (i = 0; i < len; i++) {
		while (n >= S[i]) {
			int tmp = n;
			n = n - S[i];
			printf("%d ", tmp - n);
		}
	}
	putchar('\n');
}
