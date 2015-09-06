//============================================================================
// Name        : convert_dec_to_hex.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void convert_to_hex(int n)
{
	int i;
	char hex[100];
	int quo = n;
	int rem;


	while(quo != 0)
	{
		rem = quo%16;
		if(rem <10)
			rem = rem + 48;
		else
			rem = rem + 55;
		hex[i++]= rem;
		quo = quo/16;
	}

	printf("the hexadecimal number is");
	for(int j = i-1; j>=0;j--)
	{
		printf("%c",hex[j]);
	}


}

int main(void)
{
	int num = 678;
	convert_to_hex(num);
	return 0;
}
