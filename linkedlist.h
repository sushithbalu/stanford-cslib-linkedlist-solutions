/*
struct node{
	int data;
	struct node* next;
};
*/

int count(struct node* , int );
int getnth(struct node* , int);
void deletelist(struct node**);
int pop(struct node**);
void insertnth(struct node**, int, int);
void sortedinsert(struct node**, struct node*);
void insertsort(struct node**);
void append(struct node**, struct node**);
void frontbacksplit(struct node*, struct node**, struct node**);
void removeduplicates(struct node*);
void movenode(struct node**, struct node**);
void alternatingsplit(struct node*, struct node**, struct node**);
struct node* shufflemerge(struct node*, struct node*);
struct node* sortedmerge(struct node*, struct node*);
void mergesort(struct node*);
struct node* sortedintersect(struct node*, struct node*);
void reverse(struct node**);
void recursivereverse(struct node**);

