#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

node *n, *h, *t;
int main(){
	n = new node;
	n->data = 1;
	h = n;
	t = n;
	cout << n->data;
	cout << n << endl;
	
	n = new node;
	n->data = 2;
	t->next = n;
	t = t->next;
	cout << t->data << endl;
	cout << n->data;
	
	n = new node;
	n->data = 3;
	t->next = n;
	t = t->next;
	cout << t->data << endl;

	n = new node;
	n->data = 4;
	t->next = n;
	t = t->next;
	n->next = NULL
	cout << t->data << endl;
	
}
