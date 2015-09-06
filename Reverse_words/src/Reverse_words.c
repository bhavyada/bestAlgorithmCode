/*
 ============================================================================
 Name        : Reverse_words.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverse_string(char *str, int n)
{
	int start;
	int end;
	char temp;
	for(start = 0, end =n-1; start < end; start++, end--)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
	}
}

void reverse_words(char *str)
{
	int front = 0;
	int end = 1;
	int strlen;

	while(1)
	{
		strlen = end - front;
		if((str[end]== ' ')||(str[end] == '\0'))
		{

			reverse_string(str + front,strlen);
			if(str[end] == ' ')
			{
				front = front + strlen + 1;
				end++;
			}
			if(str[end] == '\0')
			{
				break;
			}
		}
		else
		end++;
	}

}

int main(void) {
	char string[] = "Bhavya weds Shailesh";
	int n = sizeof(string)/sizeof(string[0]);
	reverse_string(string, n);
	int i;
	printf("Reverse string is");
	for(i =0; i<n; i++)
	{
		printf("%c", string[i]);
	}
	reverse_words(string);
	printf("\nReverse words of string is");
	for(i =0; i<n; i++)
		{
			printf("%c", string[i]);
		}
	return 0;
}
