/*
 ============================================================================
 Name        : Print_linked_list_in_reverse.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Node{
	int value;
	struct Node* Next;
};

void reverse(struct Node* head)
{
	if (head == NULL)
	{
		return;
	}
	printf(" %d ",head->value);

	reverse(head->Next);

	printf(" %d ",head->value);
}

int main(void) {
	struct Node* node05 = (struct Node *)malloc(sizeof(struct Node));
		node05->value = 7;
		node05->Next = NULL;
		struct Node* node04 = (struct Node *)malloc(sizeof(struct Node));
		node04->value = 4;
		node04->Next = node05;
		struct Node* node03 = (struct Node *)malloc(sizeof(struct Node));
		node03->value = 3;
		node03->Next = node04;
		struct Node* node02 = (struct Node *)malloc(sizeof(struct Node));
		node02->value = 2;
		node02->Next = node03;
		struct Node* node01 = (struct Node *)malloc(sizeof(struct Node));
		node01->value = 1;
		node01->Next = node02;
		struct Node* head1 = node01;
		reverse(head1);
		return 0;

}
