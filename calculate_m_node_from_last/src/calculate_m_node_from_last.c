/*
 ============================================================================
 Name        : calculate_m_node_from_last.c
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
	int Data;
	struct Node* Next;
};

void push(struct Node** head,int value)
{
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->Data = value;
	newnode->Next = *head;
	*head = newnode;
}

void find_mth_element_from_last(struct Node* head, int m)
{
	struct Node* current = head ;
	struct Node* m_behind = head;
	int i;
	for(i=0; i<=m; i++)
	{
		current = current->Next;
	}
	while(current != NULL)
	{
		m_behind =m_behind->Next;
		current = current->Next;
	}
	printf("%d",m_behind->Data);
}

int main(void)
{
	struct Node* head = NULL;
	push(&head,10);
	push(&head,9);
	push(&head,8);
	push(&head,7);
	push(&head,6);
	push(&head,5);
	push(&head,4);
	push(&head,3);
	push(&head,2);
	push(&head,1);

	find_mth_element_from_last(head,4);
	return 0;
}
