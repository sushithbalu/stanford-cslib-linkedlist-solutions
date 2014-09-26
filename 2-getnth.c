#include<stdio.h>
#include<assert.h>
#include"linkedlist.h"
struct node{
	int data;
	struct node* next;
};

/*
Write a GetNth() function that takes a linked list and an integer index and 
returns the data value stored in the node at that index position. GetNth() 
uses the C numbering convention that the first node is index 0, the second 
is index 1, ... and so on. So for the list {42, 13, 666} GetNth() with index 
1 should return 13. The index should be in the range [0..length-1]. If it is 
not, GetNth() should assert() fail (or you could implement some other error
case strategy).
*/
int getnth(struct node*, int);
int main()
{
	struct node* mylist = build();  //build {1, 2, 3}
	int lastnode = getnth(mylist, 5);
	printf("%d", lastnode);
	return 0;
}


int getnth(struct node* head, int index)
{
	int c = 0;
	struct node* current = head;
	while(current != NULL){
		if(c == index)
			return current->data;
		c++;
		current = current->next;
	}
	assert(0);
	
}
