/*
 ============================================================================
 Name        : Swap_every_two_nodes.c
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
	struct Node* nextNode;
};


void push(struct Node** a, int data)
{
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->value = data;
	newnode->nextNode = *a;
	*a = newnode;
}

void swap_elements(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void swap(struct Node** a)
{

	struct Node* current = *a;

	if(a == NULL)
	{
		return;
	}

	while(current != NULL && current->nextNode != NULL)
	{
	swap_elements(&current->value, &current->nextNode->value);

		current = current->nextNode->nextNode;
	}

}

void PrintLinkedList(struct Node* newList)
{

	printf(" Linked List");
	while(newList!= NULL)
	{
		printf("\t");
		printf("%d",newList->value);
		newList = newList->nextNode;
	}
	printf("\n");
}


int main(void)
{
	struct Node* a = NULL;
	push(&a,5);
	push(&a,4);
	push(&a,3);
	push(&a,2);
	push(&a,1);
	PrintLinkedList(a);
	swap(&a);
	PrintLinkedList(a);
	return 0;
}
