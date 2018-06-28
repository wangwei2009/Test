#include<iostream>
#include "MyList.h"
using namespace std;
int get_list_len(struct node *MyNode)
{
	int len = 0;
	struct node *n = MyNode;

	while (n->next!=NULL)
	{
		len++;
		n = n->next;
	}
	len++;
	return len;
}

node * creat_list(int num)
{
	node *n = (node*)malloc(sizeof(node));
	node *head = n;
	for (int i = 0; i < num-1; i++)
	{
		n->next = (node*)malloc(sizeof(node));
		n = n->next;
	}
	n->next = NULL;

	return head;
}
