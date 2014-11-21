struct node {
	int data;
	struct node* left;
	struct node* right;
};

#include<stdio.h>

static int lookup(struct node *root, int target);

int main()
{
	struct node *root = malloc(sizeof(struct node));
	root->data = 7;
	root->left = malloc(sizeof(root->left));
	root->left->data = 4;
	root->
	root->right->data = 8;

	return 0;
}

static int lookup(struct node *root, int target)
{
	if(root == NULL){
		return false;
	}else {
		if(target == root->data){
			return true;
		} else {
			if(target < root->data){
				lookup(root->left);
			} else {
				lookup(root->right);
			}
		}
	}
}

void treeprint(struct node *root)
{
	struct node *current = root;
	if(root == NULL){
		return 0;
	}
	while(current->)
