/*
 ============================================================================
 Name        : Add_numbers_in_list.c
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
	struct Node* next;
};

struct Node* CreateListNode(int num)
{
	struct Node* Node1 = (struct Node*)malloc(sizeof(struct Node));
	Node1->value = num;
	Node1->next = NULL;

	return Node1;
}

void AppendNode(struct Node** pHead, struct Node** pPrev, struct Node* pNode)
{
    if(*pHead == NULL)
        *pHead = pNode;
    if(*pPrev == NULL)
        *pPrev = pNode;
    else
    {
        (*pPrev)->next = pNode;
        *pPrev = pNode;
    }
}

struct Node* AddNode(struct Node* pNode1, struct Node* pNode2, int* carry)
{
    int num1 = 0;
    if(pNode1 != NULL)
        num1 = pNode1->value;
    int num2 = 0;
    if(pNode2 != NULL)
        num2 = pNode2->value;

    int sum = num1 + num2 + *carry;
    *carry = (sum >= 10) ? 1 : 0;

    int value = (sum >= 10) ? (sum - 10) : sum;
    return CreateListNode(value);
}

struct Node* AddReversed(struct Node* pHead1, struct Node* pHead2)
{
    int carry = 0;
    struct Node* Prev = NULL;
    struct Node* pHead = NULL;
    while(pHead1 != NULL || pHead2 != NULL)
    {
        struct Node* pNode = AddNode(pHead1, pHead2, &carry);
        AppendNode(&pHead, &Prev, pNode);

        if(pHead1 != NULL)
            pHead1 = pHead1->next;
        if(pHead2 != NULL)
            pHead2 = pHead2->next;
    }
    if(carry > 0)
    {
        struct Node* pNode = CreateListNode(carry);
        AppendNode(&pHead, &Prev, pNode);
    }

    return pHead;
}

struct Node* Reverse(struct Node** head_ref)
{
    struct Node* prev   = NULL;
    struct Node* current = *head_ref;
    struct Node* nextNode;
    while (current != NULL)
    {
        nextNode  = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    *head_ref = prev;
    return *head_ref;
}


struct Node* Add( struct Node* pHead1, struct Node* pHead2)
{
    if(pHead1 == NULL || pHead2 == NULL)
        return NULL;

    pHead1 = Reverse(&pHead1);
    pHead2 = Reverse(&pHead2);

    struct Node* pResult = AddReversed(pHead1, pHead2);
    return Reverse(&pResult);
}

void PrintLinkedList(struct Node* newList)
{

	printf(" Linked List");
	while(newList!= NULL)
	{
		printf("\t");
		printf("%d",newList->value);
		newList = newList->next;
	}
	printf("\n");
}


int main(void) {
	struct Node* node05 = (struct Node *)malloc(sizeof(struct Node));
	node05->value = 7;
	node05->next = NULL;
	struct Node* node04 = (struct Node *)malloc(sizeof(struct Node));
	node04->value = 4;
	node04->next = node05;
	struct Node* node03 = (struct Node *)malloc(sizeof(struct Node));
	node03->value = 3;
	node03->next = node04;
	struct Node* node02 = (struct Node *)malloc(sizeof(struct Node));
	node02->value = 2;
	node02->next = node03;
	struct Node* node01 = (struct Node *)malloc(sizeof(struct Node));
	node01->value = 1;
	node01->next = node02;
	struct Node* head1 = node01;

	struct Node* node15 = (struct Node *)malloc(sizeof(struct Node));
	node15->value = 7;
	node15->next = NULL;
	struct Node* node14 = (struct Node *)malloc(sizeof(struct Node));
	node14->value = 4;
	node14->next = node15;
	struct Node* node13 = (struct Node *)malloc(sizeof(struct Node));
	node13->value = 3;
	node13->next = node14;
	struct Node* node12 = (struct Node *)malloc(sizeof(struct Node));
	node12->value = 2;
	node12->next = node13;
	struct Node* node11 = (struct Node *)malloc(sizeof(struct Node));
	node11->value = 1;
	node11->next = node12;
	struct Node* head2 = node11;

	PrintLinkedList(head1);
	PrintLinkedList(head2);

	PrintLinkedList(Add(head1, head2));
	return 0;

}
