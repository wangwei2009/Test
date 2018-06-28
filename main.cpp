#include<iostream>
#include "MyList.h"
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



	//cout << n1.next << endl;
	node *n2;

	//n2->val = 1;

}