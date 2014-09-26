/*
Write a SortedInsert() function which given a list that is sorted in increasing
 order, and asingle node, inserts the node into the correct sorted position in 
the list. While Push() allocates a new node to add to the list, SortedInsert() 
takes an existing node, and just rearranges pointers to insert it into the list. 
There are many possible solutions to this problem.
*/
struct  node{
	int data;
	struct node *next;
};

#include<stdio.h>
#include<stdlib.h>
struct node *build();
void push(struct node **headref, struct node *newnode);
int main()
{
	struct node *mylist = build();
	printf("%d",mylist->data);
	return 0;
}

void sortedinsert(struct node **headref, struct node *newnode)
{
	struct node* current = *headref;
	if(current == NULL||current->data>=newnode->data){
		newnode->next = current;
		current = newnode;
	}
	else{
	while(current->next!= NULL&&current->next->data<newnode->data){
		current = current->next;
	}
	newnode->next = current->next;
	current->next = newnode;

}

void push(struct node **headref, struct node *newdata)
{
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = newdata;
	newnode->next = *headref;
	*headref = newnode;
}

struct node *build()
{
	struct node *head = NULL;
	push(&head, 1);
	push(&head, 4);
	push(&head, 9);
	push(&head, 2);
	return head;
}
