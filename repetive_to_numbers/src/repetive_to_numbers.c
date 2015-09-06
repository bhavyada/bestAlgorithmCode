/*
 ============================================================================
 Name        : repetive_to_numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */



// you are given an array {1,1,1,1,2,2,3,3,3,3,4,4,4} write a function to output {1,4,2,2,3,4,4,3}
#include <stdio.h>
#include <stdlib.h>

void repetive_to_numbers(int in[], int out_put[],int len, int *outlen)
{
	int count = 0;
	int i;int j=0;int n=0;
	while(i<len)
	{
		if(in[j] == in[i])
		{
			count++;
			i++;
		}
		if(in[j] != in[i])
		{

			out_put[n] = in[j];
			out_put[n+1] = count;
			count =0;
			j = i;
			n=n+2;
		}
	}
	*outlen = n;
}

int main(void)
{
	int input_array[15] = {1,1,1,1,2,2,3,3,3,3,4,4,4,4,4};
	int n = sizeof(input_array)/sizeof(input_array[0]);
	int out_array[7];int i;
	int outlen = 0;
	printf("Input array");
	for(i =0;i<n;i++)
	{
		printf(" %d",input_array[i]);
	}

	repetive_to_numbers(input_array,out_array,n, &outlen);
	printf("\n");
	printf("Output array");
	int l;
	for(l =0;l<outlen;l++)
		{
			printf(" %d",out_array[l]);
		}
	return 0;
}
