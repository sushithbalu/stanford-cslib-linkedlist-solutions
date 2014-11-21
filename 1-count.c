/*
Write a Count() function that counts the number of times a given int occurs 
in a list. The code for this has the classic list traversal structure as 
demonstrated in Length().
*/

#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

int count(struct node* head, int searchfor)
{
	struct node* current = head;
	int c = 0;

	while(current != NULL){
		if(current->data == searchfor){
			c++;
		}
		current = current->next;
	}
	return c;
}	
