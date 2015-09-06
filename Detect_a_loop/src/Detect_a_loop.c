/*
 ============================================================================
 Name        : Detect_a_loop.c
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
	struct Node *Next;
};

void detect_loop(struct Node* head)
{
	struct Node* fast = head;
	struct Node* slow  = head;

	while ((fast ->Next != NULL) && (fast->Next->Next != NULL))
	{
		slow = slow->Next;
		fast = fast->Next->Next;
		if (fast == slow)
		{
			printf("loop is detected");
		}
	}
}

void Insert(struct node** head, int value)
{

}

int main(void)
{
	struct Node* a = NULL;
	Insert(&a,5);
	Insert(&a,6);
	Insert(&a,9);
	Insert(&a,2);
	Insert(&a,4);
}
