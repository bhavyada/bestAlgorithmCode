/*
 ============================================================================
 Name        : Swap_nodes_without_changing_value.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

// Input 1->2->3->4->5    x=3 y=4
// Output 1->4->3->2->5

#include <stdio.h>
#include <stdlib.h>

struct Node{
	int value;
	struct Node* next;
};

void push(struct Node **headref, int data)
{
	//struct Node *head = *headref;
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->value = data;
	newnode->next = *headref;
	*headref = newnode;
}

void printLinkedList(struct Node* head)
{
	struct Node* current = head;
	while(current != NULL)
	{
		printf("%d ",current ->value);
		current = current ->next;
	}
}

void swapNodes(struct Node **head_ref, int x, int y)
{
   // Nothing to do if x and y are same
   if (x == y) return;

   // Search for x (keep track of prevX and CurrX
   struct Node *prevX = NULL, *currX = *head_ref;
   while (currX && currX->value != x)
   {
       prevX = currX;
       currX = currX->next;
   }

   // Search for y (keep track of prevY and CurrY
   struct Node *prevY = NULL, *currY = *head_ref;
   while (currY && currY->value != y)
   {
       prevY = currY;
       currY = currY->next;
   }

   // If either x or y is not present, nothing to do
   if (currX == NULL || currY == NULL)
       return;

   // If x is not head of linked list
   if (prevX != NULL)
       prevX->next = currY;
   else // Else make y as new head
       *head_ref = currY;

   // If y is not head of linked list
   if (prevY != NULL)
       prevY->next = currX;
   else  // Else make x as new head
       *head_ref = currX;

   // Swap next pointers
   struct Node *temp = currY->next;
   currY->next = currX->next;
   currX->next  = temp;
}

int main(void)
{
	struct Node* head = NULL;
	push(&head, 1);
	push(&head, 2);
	push(&head, 3);
	push(&head, 4);
	push(&head, 5);
	printLinkedList(head);
	swapNodes(&head, 4, 2);
	printf("\n");
	printLinkedList(head);
	return 0;
}
