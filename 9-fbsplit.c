struct node{
	int data;
	struct node* next;
};

void fbsplit(struct node* source, struct node** fref, struct node** bref)
{
	struct node* current = source;
	int i;
	int len = length(source);
	int halflen = (len-1)/2;
	if(len<2){
		*fleft = source;
		*bref = NULL;
	} else {
		for(i = 0; i < halflen; i++){
			current = current->next;
		}
	*fref = source;
	*bref = current->next;
	current->next = NULL;
}
		
