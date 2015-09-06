//============================================================================
// Name        : Divisor_of_number.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;


void divisor(int n)
{
	int i = 2;
	if ( n<2)
	{
		printf("%d",n);
	}
	while (i <= sqrt(n))
	{
		if(n % i == 0)
		{
			printf(" %d", i);
			if(i != n/i)
					{
						printf(" %d",n/i);
					}
		}

		i++;
	}
}

int main()
{
	divisor(36);

}
