/*
 ============================================================================
 Name        : Pre-order_tree.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Node{
	int Value;
	struct Node* Left;
	struct Node* Right;
};

struct Node* createNode(int num)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->Value = num;
	newNode->Left = NULL;
	newNode->Right = NULL;
	return newNode;
}

void printPreorder(struct Node* Node)
{
     if (Node == NULL)
          return;


     printf("%d ", Node->Value);

     printPreorder(Node->Left);
     printPreorder(Node->Right);
}

void printInorder(struct Node* Node)
{
	if (Node == NULL)
	{
		return;
	}
	printInorder(Node->Left);
	printf(" %d",Node->Value);
	printInorder(Node->Right);

}

void printPostorder(struct Node* Node)
{
	if (Node == NULL)
	{
		return;
	}
	printPostorder(Node->Left);
	printPostorder(Node->Right);
	printf(" %d",Node->Value);


}



int main(void)
{
	struct Node *root  = createNode(1);
	     root->Left  = createNode(2);
	     root->Right = createNode(3);
	     root->Left->Left = createNode(4);
	     root->Left->Right = createNode(5);
	     printf("Preorder");
	     printPreorder(root);
	     printf("\n");
	     printf("Inorder");
	     printInorder(root);
	     printf("\n");
	     printf("Postorder");
	     printPostorder(root);
	     return 0;
}
