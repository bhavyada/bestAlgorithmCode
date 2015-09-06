/*
 ============================================================================
 Name        : trial_pointers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[3] = {2,3,4};
	int (*pa)[3];
	pa = &a;
	printf("%d", (*pa)[1]);
	return 0;
}
