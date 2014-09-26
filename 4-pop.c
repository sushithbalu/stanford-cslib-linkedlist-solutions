#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* next;
};

/*
Write a Pop() function that is the inverse of Push(). Pop() takes a non-empty 
list, deletes the head node, and returns the head node's data. If all you ever 
used were Push() and Pop(), then our linked list would really look like a 
stack. However, we provide more general functions like GetNth() which what 
make our linked list more than just a stack. Pop() should assert() fail if 
there is not a node to pop. Here's some sample code which calls Pop()....
*/
#if 0
void poptest()
{
	struct node* build();
	int a = pop(&head);
	int b = pop(&head);
	int c = pop(&head);
	int len = length(head);
}
#endif

int pop(struct node **headref)
{
	struct node* head = *headref;
	int d;
	assert(head != NULL);
	d = head->data;
	*headref = head->next; 
	free(head);
	return d;
}
