/*
 ============================================================================
 Name        : Swap_alternate_using_pointers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int Value;
	struct Node* Next;
};

void push(struct Node** a, int data)
{
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->Value = data;
	newnode->Next = *a;
	*a = newnode;
}

void PrintLinkedList(struct Node* newList)
{

	printf(" Linked List");
	while(newList!= NULL)
	{
		printf("\t");
		printf("%d",newList->Value);
		newList = newList-> Next;
	}
	printf("\n");
}


void swap(struct Node** head)
{
	struct Node* prev = *head;
	struct Node* current = (*head)->Next;
	struct Node* nextnode;
	*head = current;
	while(1)
	{
		nextnode = current->Next;
		current->Next = prev;
		if((nextnode == NULL) || (nextnode->Next == NULL))
		{
				prev->Next = nextnode;
				return;

		}
		prev->Next = nextnode->Next;
		prev = nextnode;
		current = prev->Next;

	}


}

int main(void) {
	struct Node* head = NULL;
	    push(&head,6);
		push(&head,5);
		push(&head,4);
		push(&head,3);
		push(&head,2);
		push(&head,1);
		PrintLinkedList(head);
		swap(&head);
		PrintLinkedList(head);
		return 0;
}
