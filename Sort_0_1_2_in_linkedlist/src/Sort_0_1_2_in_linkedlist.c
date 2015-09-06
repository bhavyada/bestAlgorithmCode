/*
 ============================================================================
 Name        : Sort_0_1_2_in_linkedlist.c
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

void sort(struct Node** head)
{
	int count[3] = {0,0,0};
	struct Node* current = *head;

	while(current != NULL)
	{
		count[current->Data] = count[current->Data] + 1;
		current = current->Next;
	}

	int i =0;
    current = *head;
    while(current != NULL)
    {
    	if (count[i] == 0)
    	{
    		i++;
    	}
    	else
    	{
    		current ->Data = i;
    		count[i]--;
    		current = current ->Next;
    	}

    }
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
	push(&head, 2);
	push(&head, 1);
	push(&head, 1);
	push(&head, 2);
	push(&head, 2);
	push(&head, 2);
	push(&head, 0);
	push(&head, 0);
	push(&head, 2);
	push(&head, 1);
	PrintLinkedList(head);
	sort(&head);
	PrintLinkedList(head);
	return 0;
}
