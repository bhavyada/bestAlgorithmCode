/*
 ============================================================================
 Name        : Stack_using_linkedlist.c
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
struct Node* a = NULL;

void push(struct Node** head,int value)
{
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->Data = value;
	newnode->Next = *head;
	*head = newnode;
}

int pop()
{
	struct Node* pop_element = a;
	int data;

	if(a == NULL)
	{
		printf("Stack is empty");
	}
	data = a->Data;
	a = a->Next;
	free(pop_element);
	return data;
}

int main(void) {
	push(&a,5);
	push(&a,7);
	push(&a,8);
	push(&a,9);
	push(&a,3);
	printf("%d",pop());
	printf("%d",pop());
	printf("%d",pop());
	printf("%d",pop());
	return 0;

}
