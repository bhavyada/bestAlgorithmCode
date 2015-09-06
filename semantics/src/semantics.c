/*
 ============================================================================
 Name        : semantics.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	if (-1 < (unsigned char)1)
	{
		printf("-1 is less than (unsigned char) 1:ANSI Semantics");
	}
	else
	{
		printf("-1 Not less than (unsigned char)1: K&R Semantics" );
	}

	printf("the value is %d",(signed char) 1);
	return 0;
}
