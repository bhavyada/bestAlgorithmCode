/*
 ============================================================================
 Name        : pointers_example.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//	int p=3;
//	int q=5;
	int *a;
	int *b;
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	a = &(arr[3]);
	b = &(arr[6]);
	printf("a: %d, b: %d\n", a, b);
//	printf("%d\n",(*a)++);
//	printf("%d\n",(*b)++);
	*a++ = *b++;
	int i;
	for (i = 0; i < 10; i++) {printf("%d ", arr[i]);}
	printf("\n*a: %d, *b: %d, a: %d, b: %d\n",*a, *b, a, b);
	return 0;
}
