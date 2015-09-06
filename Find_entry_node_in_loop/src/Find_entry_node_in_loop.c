/*
 ============================================================================
 Name        : Find_entry_node_in_loop.c
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
	int Value;
	struct Node* Next;
};

struct Node* MeetingNode(struct Node* head)
{
	struct Node* slow_p = head;
	struct Node* fast_p = head;
	while ((slow_p != NULL) && (fast_p != NULL) && (fast_p->Next != NULL))
		{
			slow_p = slow_p->Next;
			fast_p = fast_p->Next->Next;
			if (slow_p == fast_p)
			{
				printf("Loop detected");
				return fast_p;
			}
		}
	return NULL;
}

//struct Node* MeetingNode(struct Node* head)
//{
//	struct Node* pSlow = head;
//	if(pSlow == NULL)
//		return NULL;
//	struct Node* pFast = pSlow->Next;
//	while(pFast != NULL && pSlow != NULL)
//	{
//		if(pFast == pSlow)
//		{
//			return pFast;
//		}
//		pSlow = pSlow->Next;
//		pFast = pFast->Next;
//		if(pFast != NULL)
//		{
//			pFast = pFast ->Next;
//			if (pFast != NULL)
//			{
//				pFast = pFast -> Next;
//			}
//		}
//	}
//	return NULL;
//}

struct Node* EntryNode(struct Node* head)
{
	struct Node* meetingNode = MeetingNode(head);
	if (meetingNode == NULL)
		return NULL;
	struct Node* pNode = meetingNode;
	int Num_of_nodes = 0;
	while(pNode->Next != meetingNode)
	{
		pNode= pNode->Next;
		Num_of_nodes++;
	}
	Num_of_nodes++;
    printf("\nThe number of nodes in the loop is %d",Num_of_nodes);
	pNode = meetingNode;

	struct Node* pNode2 = head;
	while(pNode != pNode2)
	{
		pNode = pNode->Next;

		pNode2 = pNode2->Next;
	}
	return pNode;
}

int main(void) {
	struct Node* node05 = (struct Node *)malloc(sizeof(struct Node));
		node05->Value = 7;
		node05->Next = NULL;
		struct Node* node04 = (struct Node *)malloc(sizeof(struct Node));
		node04->Value = 4;
		node04->Next = node05;
		struct Node* node03 = (struct Node *)malloc(sizeof(struct Node));
		node03->Value = 3;
		node03->Next = node04;
		struct Node* node02 = (struct Node *)malloc(sizeof(struct Node));
		node02->Value = 2;
		node02->Next = node03;
		struct Node* node01 = (struct Node *)malloc(sizeof(struct Node));
		node01->Value = 1;
		node01->Next = node02;
		struct Node* head1 = node01;
		node05->Next = node02;

		//node02 = head1->Next->Next->Next->Next;
		struct Node* node = EntryNode(head1);
		printf("\nEntry point of loop is at Node %d",node->Value);
		return 0;

}
