/*
 * file name: relationRmat.c
 * author   : Yu Liu
 * email    : <ilhanwnz@hotmail.com>
 * time     : Tue 08 Jan 2019 04:13:34 PM CST
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ROW	4
#define COL 	4

/* 
int M[ROW][COL] = {
	{0, 1, 0, 0, 0},
	{1, 0, 1, 1, 0},
	{1, 0, 1, 0, 1},
};
*/
int M[ROW][COL] = {
	{1, 0, 0, 0},
	{0, 1, 0, 0},
	{0, 0, 1, 0},
	{0, 0, 0, 1},
};
int main(void)
{
	int i, j;
	_Bool is_reflex = true;
	printf("Realtion matrix:\n");
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
	printf("---------------------------------------\n");
	printf("R = {");
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			if (M[i][j] == 1) {
				if (i != j)
					is_reflex = false;
				printf("(a%d, b%d),", i + 1, j + 1);
			}
		}
	}
	printf("}");
	putchar('\n');
	printf("---------------------------------------\n");
	if (is_reflex)
		printf("This R set is reflexive.\n");
	else
		printf("This R set ist not reflexive.\n");

	exit(0);
}
