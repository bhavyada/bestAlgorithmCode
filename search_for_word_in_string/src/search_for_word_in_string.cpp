//============================================================================
// Name        : search_for_word_in_string.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int find_word(const char* str, const char*find)
{
	int not_found;
	if((*str == '\0') && (*find == '\0'))
			{
				return 1;
			}
	for(int i =0; str[i]!= '\0'; i++)
	{
		 not_found = 0;
		for(int j = 0; find[j]!= '\0'; j++)
		{
			if(str[i+j] != find[j])
			{
				not_found = 1;
				break;
			}
		}
		if(!not_found == 1 )
		{
			return 1;
		}
	}
	return -1;
}

int main() {
	const char text[] = "When do you want to change your case?";
	const char word[] = "chan";
	printf("%d",find_word(text,word));
}
