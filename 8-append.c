struct node{
	int data;
	struct node* next;
};

void append(struct node** a, struct node** b)
{
	struct node* current;
	if(*a == NULL)
		*b = *a;
	else{
		current = *a;
		while(current != NULL){
			current = current->next;
		}
		current->next = *b;
	}
	*b = NULL;
}
