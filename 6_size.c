/*
 * FILE : size.c
 * Author:iasidba
 */
#include <stdio.h>
/**
 *
 * main : prints size of all datattypes in c.
 */
int main(void)
{
	printf("size of char : %ld byte(s)\n", sizeof(char));
	printf("size of short int : %ld byte(s)\n", sizeof(short int));
	printf("size of int : %ld byte(s)\n", sizeof(int));
	printf("size of long : %ld byte(s)\n", sizeof(long int));
	printf("size of float : %ld byte(s)\n", sizeof(float));
	printf("size of double : %ld byte(s)\n", sizeof(double));
	printf("size of long double : %ld byte(s)\n", sizeof(long double));
	printf("size of int pointer : %ld byte(s)\n", sizeof(int*));
	printf("size of char pointer : %ld byte(s)\n", sizeof(char*));
	printf("size of float pointer : %ld byte(s)\n", sizeof(float*));
	return 0;
}
