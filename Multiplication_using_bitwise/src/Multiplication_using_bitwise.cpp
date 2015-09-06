//============================================================================
// Name        : Multiplication_using_bitwise.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int add(int a, int b)
{
	int carry;
	while(b!=0)
	{
	carry = a & b;
	a = a^b;
	b = carry << 1;
	}
	return a;
}

int multiply(int a, int b)
{
	int result =0;
	while(b!=0)
	{
		if((b & 01) == 1)
		{
			result = add(result,a);
		}
		a= a<<1;
		b= b>>1;
	}
	return result;
}

int main()
{
	int a ;
	int b = 4;

	printf("\n");
	for(a=1;a<=10;a++)
	{
		printf(" %d",multiply(a,b));
	}

}
