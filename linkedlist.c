#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

#include"linkedlist.h"
int length(struct node*);
void push(struct node**, int);
struct node* build();

int main()
{
	struct node* mylist = build(); 

	printf("%d\n", count(mylist, 3));
//	printf("%d\n", getnth(mylist, 1));

//	deletelist(&mylist);
//	printf("%d",mylist->data);

//	printf("length before pop = %d\n", length(mylist));
//	printf("pop(%d)\n", pop(&mylist));
//	printf("length after pop = %d\n", length(mylist));

//	printf("%d", )
//	printf("%d", )
//	printf("%d", )
//	printf("%d", )
//	printf("%d", )
//	printf("%d", )
//	printf("%d", )
//	printf("%d", )
//	printf("%d", )
//	printf("%d", )
//	printf("%d", )
//	printf("%d", )
	return 0;
}

struct node* build()
{
	struct node* head = NULL;
	
	push(&head, 1);
	push(&head, 2);
	push(&head, 2);
	push(&head, 3);
	push(&head, 1);
	return head;
}

int length(struct node* head)
{
	int c = 0;
	struct node* current = head;
	
	while (current != NULL){
		c++;
		current = current->next;
	}
	return c;
}

void push(struct node** headref, int newdata)
{
	struct node* newnode = malloc(sizeof(struct node));

	newnode->data = newdata;
	newnode->next = *headref;
	*headref = newnode;
}
