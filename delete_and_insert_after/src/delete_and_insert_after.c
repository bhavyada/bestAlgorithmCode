/*
 ============================================================================
 Name        : delete_and_insert_after.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Node{
	int Data;
	struct Node* Next;
};

void delete(struct Node** head, int value)
{
	struct Node* delete_elem;
	struct Node* current = *head;
	struct Node* prev = *head;
	if(current == NULL)
	{
		return;
	}
	while(current!= NULL)
	{
		if(current->Data == value)
		{
			delete_elem = current;
			break;
		}
		prev = current;
		current = current->Next;
	}
	prev->Next = current->Next;
	free(delete_elem);
}

void push(struct Node** head,int value)
{
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->Data = value;
	newnode->Next = *head;
	*head = newnode;
}

void PrintLinkedList(struct Node* newList)
{

	printf(" Linked List");
	while(newList!= NULL)
	{
		printf("\t");
		printf("%d",newList->Data);
		newList = newList-> Next;
	}
	printf("\n");
}
int main(void) {
	struct Node* head = NULL;
	push(&head, 6);
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);
	PrintLinkedList(head);
	delete(&head,4);
	PrintLinkedList(head);
	return 0;
}
