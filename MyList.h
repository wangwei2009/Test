#pragma once

#ifdef __cplusplus
extern "C" {
#endif
#define WinLength 10
#include<iostream>

using namespace std;
struct node
{
	char val;
	int val2;
	node *next;
};

int get_list_len(struct node *MyNode);
struct node * creat_list(int n);

#ifdef __cplusplus
}
#endif // __cplusplus