struct node{
	int data;
	struct node *next;
};
void insertsort(struct node** headref)
{
	struct node* current = *headref;
	struct node* nextp;
	struct node* ref;

	while(current != NULL){
		nextp = current->next;  //
		sortedinsert(&ref, current);
		current = nextp;
	}
	*headref = ref;
}
