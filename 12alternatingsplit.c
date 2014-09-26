struct node{
	int data;
	struct node* next;
};

void alternatingsplit(struct node* source, struct node** aref, struct node** bref)
{
	struct node* current = source;
	struct node* a = NULL;	
	struct node* b = NULL;
	
	while(current != NULL){
		movenode(&a, &current);
	if(current != NULL)
		movenode(&b, &current);
	}
	*aref = a;
	*bref = b;
	}	
