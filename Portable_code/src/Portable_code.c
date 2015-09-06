/*
 ============================================================================
 Name        : Portable_code.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<limits.h>
#include<stdio.h>

int main()
{
	(void)printf("biggest int is %d\n", INT_MAX);
	printf("biggest char is %d\n",CHAR_MAX);

	char a = '1';
	char b = '2';
	char *cp = &a;
	const char *ccp = &b;
	*ccp = 'b';
	printf("*cp = %c\n",*ccp);
	char **dcp = &cp;
	 char ** const dccp = &ccp;
	dccp = &cp;
	**dccp = 'a';
	printf("%c\n",**dccp);
//	printf("%d\n",cp);
	return 0;
}
