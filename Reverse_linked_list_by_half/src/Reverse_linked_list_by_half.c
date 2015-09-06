/*
 ============================================================================
 Name        : Reverse_linked_list_by_half.c
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

void push(struct Node** head, int num)
{
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->Data = num;
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

struct Node* reverse(struct Node** head_ref)
{
    struct Node* prev   = NULL;
    struct Node* current = *head_ref;
    struct Node* nextNode;
    int count =0;
    while (current != NULL)
    {
    	count++;
        nextNode  = current->Next;
        current->Next = prev;
        prev = current;
        current = nextNode;
    }
    *head_ref = prev;
    return *head_ref;
}

struct Node* reverse_tail(struct Node** head_ref)
{
    struct Node* prev   = NULL;
    struct Node* current = *head_ref;
    struct Node* tempnode = *head_ref;
    struct Node* nextNode;
    int count =0;
    while (current != NULL)
    {
    	count++;
        nextNode  = current->Next;
        current->Next = prev;
        prev = current;
        current = nextNode;
    }
    *head_ref = prev;
    return tempnode;
}


//void halfreverse(struct Node **head)
//{
//	int count = 0;
//	int half;
//	struct Node* current = *head;
//	while(current != NULL)
//	{
//		count++;
//		current = current->Next;
//	}
//	half = count/2;
//	struct Node* slowp = *head;
//	struct Node* fastp = *head;
//	int i;
//	for(i = 0; i< half; i++)
//	{
//		fastp = fastp->Next;
//	}
//	slowp = reverse(&slowp,half);
//	fastp = reverse(&fastp,half);
//
//}

void halfreverse(struct Node** head)
{
	if(*head == NULL || (*head)->Next == NULL)
	{
		return;
	}
	struct Node* slow_p = *head;
	struct Node* fast_p = (*head)->Next;
	while((fast_p != NULL)&&(fast_p->Next != NULL))
	{
		fast_p = fast_p ->Next->Next;
		slow_p = slow_p->Next;
	}
	struct Node* temp = slow_p->Next;
	slow_p->Next = NULL;
	struct Node* tail_first_half;
	tail_first_half = reverse_tail(head);
	struct Node* head_second_half;
	head_second_half = reverse(&(temp));
	tail_first_half->Next = head_second_half;
}

int main(void)
{
	struct Node* head = NULL;
	push(&head,6);
	push(&head,5);
	push(&head,4);
	push(&head,3);
	push(&head,2);
	push(&head,1);
	PrintLinkedList(head);
	halfreverse(&head);
	PrintLinkedList(head);
	return 0;
}
