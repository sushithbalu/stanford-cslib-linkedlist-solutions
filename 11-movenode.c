struct node{
	int data;
	struct node* next;
}

void movenode(struct node** dest, struct node** source)
{
	struct node* newnode = *source;
	*source = newnode->next;
	newnode->next = *dest;
	*dest = newnode;
}
