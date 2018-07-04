#include<iostream>
#include "MyList.h"
#include "Sort.h"
using namespace std;

void main() {

	char a = 1;
	char *b = &a;
	cout << "sizeof(b)=" << sizeof(b) << endl;
	struct node *n1;

	n1 = creat_list(3);
	//n1->next = NULL;
	int len = get_list_len(n1);
	cout << "len = " << len << endl;

	int data[11] = {72,6,57,88,60,42,18,83,73,48,85};
	BubbleSort(data, 11);
	//QuickSort(data, 11);

	//cout << n1.next << endl;
	node *n2;

	//n2->val = 1;

}