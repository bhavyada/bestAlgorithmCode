/*
 ============================================================================
 Name        : Insert_after_m_node.c
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

void Insert_after(struct Node** head, struct Node* node, int num)
{
	if(head == NULL)
	{
		return;
	}
	struct Node* current = *head;
	struct Node* nextnode = current->Next;
	struct Node* newnode= (struct Node*)malloc(sizeof(struct Node));
	newnode->Data = num;
	newnode->Next = NULL;
	while(current != NULL)
	{
		if(current == node)
		{
			nextnode = current->Next;
			current->Next = newnode;
			newnode->Next = nextnode;
		}
		current = current->Next;

	}
}

int main(void) {
	struct Node* node6 = (struct Node*)malloc(sizeof(struct Node));
	node6->Data = 6;
	node6->Next = NULL;
	struct Node* node5 = (struct Node*)malloc(sizeof(struct Node));
	node5->Data = 5;
	node5->Next = node6;
	struct Node* node4 = (struct Node*)malloc(sizeof(struct Node));
	node4->Data = 4;
	node4->Next = node5;
	struct Node* node3 = (struct Node*)malloc(sizeof(struct Node));
	node3->Data = 3;
	node3->Next = node4;
	struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));
	node2->Data = 2;
	node2->Next = node3;
	struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
	node1->Data = 1;
	node1->Next = node2;
	struct Node* head = node1;
	PrintLinkedList(head);
	Insert_after(&head, node4, 9);
	PrintLinkedList(head);
	return 0;
}
