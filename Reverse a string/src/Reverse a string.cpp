//============================================================================
// Name        : Reverse.cpp
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

void reverse_with_pointers(char* str, int n, char* dest)
{
	char* src = str;
	char* desti = dest;

	//int len = n;
//	int i=0;
	while(*src != '\0')
	{
		src++;
	}

	while(n > 0)
	{
		src--;
		*desti = *src;
		desti++;

		n--;
	}
	*desti = '\0';


}

int main() {
	char string1[] = "My name is Bhavya";
	int n = sizeof(string1)/sizeof(string1[0]);
	reverse_string(string1,n);
	int i;
	for(i=0; i<n; i++)
	{
		printf("%c", string1[i]);
	}
	char dest[20];
	char string2[] = "My name is Bhavya";
	reverse_with_pointers(string2,n,dest);
	for(i=0; i<n; i++)
		{
			printf(" %c", dest[i]);
		}
}
