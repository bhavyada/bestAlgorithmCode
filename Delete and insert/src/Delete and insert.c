/*
 ============================================================================
 Name        : Delete.c
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

struct Node* head = NULL;

void Insert(struct Node* prev_node, int data)
{
	struct Node* temp;
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->Data = data;
	newnode->Next = NULL;
	if(prev_node == NULL)
	{
		prev_node = newnode;
	}
	else
	{
		temp = prev_node->Next;
		prev_node->Next = newnode;
		newnode->Next = temp;
	}
}

void delete(struct Node* delete_elem)
{
	struct Node* cur_head;
	if (delete_elem == head)
	{
		head = delete_elem->Next;
		free(delete_elem);
		return;
	}
	while(cur_head)
	{
		if(cur_head->Next == delete_elem)
		{
			cur_head->Next = delete_elem->Next;
			free(delete_elem);
			return;
		}
		cur_head = cur_head->Next;
	}

}

int main(void)
{

	Insert(head, 62);

	Insert(head->Next, 78);
	struct Node* a2 = (struct Node*)malloc(sizeof(struct Node));
	a2->Next = a1;
	Insert(a2, 89);
	struct Node* a3 = (struct Node*)malloc(sizeof(struct Node));
	a3->Next = a2;
	Insert(a3, 92);
	printf("The linked list is ");
	delete(92);
	printf("The linked list is");
	delete(78);
	printf("The linked list is");
}
