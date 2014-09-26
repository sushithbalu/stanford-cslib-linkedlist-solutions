struct node{
	int data;
	struct node* next;
};

void removedup(struct node* head)
{
	struct node* current = head;
	if(current ==NULL)
		exit(0);
	
