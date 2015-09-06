//============================================================================
// Name        : Reverse_words_of_string.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void reverse_string(char* str, int n)
{
	int start; char temp;
	int end = n-1;
	for(start = 0 ; start < end; start++, end--)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
	}
}

void reverse_words(char* str)
{
	int front = 0;
	int end = 0;
	while(1)
	{
		int strlen = end - front;

		if((*(str+end) == ' ')||(*(str + end) == '\0'))
			{
				reverse_string(str+front,strlen);

				if(*(str+end) == ' ')
				{
					front = front +strlen +1;
					end++;
				}
				if(*(str + end) == '\0')
				{
					break;
				}
			}
		else
		{
		end++;
		}
	}
}

int main()
{
	char string[40] = "Bhavya is good";
	int n = 0;
	char* str = string;
	while(*(str++))
	{
		n++;
	}
	for(int i = 0; i<n; i++)
	{
		printf("%c",string[i]);
	}
	reverse_string(string, n);
	for(int i = 0; i<n; i++)
		{
			printf("%c",string[i]);
		}
	reverse_words(string);
	for(int i = 0; i<n; i++)
		{
			printf("%c",string[i]);
		}

}
