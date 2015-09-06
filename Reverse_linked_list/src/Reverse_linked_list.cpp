//============================================================================
// Name        : Reverse_linked_list.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<ctype.h>
using namespace std;

struct Node{
	int Data;
	struct Node* Next;
};

void Reverse(struct Node** head)
{
	struct Node* current = *head;
	struct Node* prev = NULL;
	struct Node* Next;

	while(current != NULL)
	{
		Next = current ->Next;
		current ->Next = prev;
		prev = current ;
		current = Next;
	}
	*head = prev;
}

void print_linked_list(struct Node* head)
{
	struct Node* current = head;
	while(current != NULL)
	{
		printf("%d", current->Data);
		current = current->Next;
	}
}

void Insert(struct Node** head, int value)
{
	struct Node* current = *head;
	struct Node* Newnode = (Node*)new(sizeof(struct Node));
	Newnode->Data = value;
	Newnode->Next = NULL;

	if((*head == NULL) || (Newnode->Data < *head->Data))
		{
			*head = Newnode;
			Newnode->Next = current;
		}
	else
	{
		while(current != NULL) && (current-> Data> Newnode-> Data)
		{
			prev = current;
			current = current -> Next;
		}
		prev->Next = Newnode;
		Newnode->Next = current;
	}

}

int main() {
	struct Node* head = NULL;
	Insert(&a, 5);
	Insert(&a, 9);
	Insert(&a, 4);
	Insert(&a, 8);
	Insert(&a, 6);
	Print_Linked_list(a)
	reverse_linked_list(&a);
	Print_Linked_List(a);
}
