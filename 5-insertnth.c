/*
A more difficult problem is to write a function InsertNth() which can insert a
new node at any index within a list. Push() is similar, but can only insert a 
 node at the head end of the list (index 0). The caller may specify any index 
in the range [0..length], and the new node should be inserted so as to be at 
that index.
*/
void insertnthtest()
{
	struct node* head = NULL;
	
	insertnth(&head, 0, 13);	//build 13
	insertnth(&head, 1, 42);	//build 13, 42
	insertnth(&head, 1, 5);		//build 13, 5, 42
	deletelist(&head);
}

void insertnth(struct node** headref, int pos, int val)
{
	int i = 0;
	struct node* current = *headref;	

	if(pos == 0)	//0th position is different..
		push(headref, val);
	else {
		while(i < pos) {
			assert(current != NULL);
			current = current->next;
			i++;
		}
		assert(current != NULL);
		push(&(current->next), val);
	}
}

