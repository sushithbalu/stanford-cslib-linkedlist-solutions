#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
#include"linkedlist.h"

void deletetest();
int main()
{
	deletetest();
	return 0;
}

/*
Write a function DeleteList() that takes a list, deallocates all of its memory and sets its
head pointer to NULL (the empty list).
*/
void deletelist(struct node **head);
void deletetest()
{
	struct node* mylist = build();
	deletelist(&mylist);
}

void deletelist(struct node **head)
{
	int c;
	struct node* current = *head;
	struct node* next;

	while(current != NULL){
		next = current->next;
		free(current);
		current = next;
	}	
	*head = NULL;

}
