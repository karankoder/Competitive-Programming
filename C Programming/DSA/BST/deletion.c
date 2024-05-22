#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *n; 
    n = (struct node *) malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void insert(struct node *root, int key){
   struct node *prev = NULL;
   while(root!=NULL){
       prev = root;
       if(key==root->data){
           printf("Cannot insert %d, already in BST", key);
           return;
       }
       else if(key<root->data){
           root = root->left;
       }
       else{
           root = root->right;
       }
   }
   struct node* new = createNode(key);
   if(key<prev->data){
       prev->left = new;
   }
   else{
       prev->right = new;
   }
}

struct node* inorder_succ(struct node *r, int n)
{
	struct node*p=r,*i=NULL;
	//After the end of this loop, p will point to the node with value n .
	//i will be the last ancestor that has value more than p
	while(p->data!=n)
	{
		if(p->data>n)
		{
			i = p;
			p = p->left;
		}
		else if(p->data<n)
		{
			p = p->right;	
		}
	}
	//If right subtree of p exists, then return leftmost node of right subtree
	if(p->right!=NULL)
	{
		p = p->right;
		while(p->left!=NULL)
			p = p->left;
		return p;
	}
	else
	{
		return i;
	}
}

struct node *inOrderPredecessor(struct node* root){
    root = root->left;
    while (root->right!=NULL)
    {
        root = root->right;
    }
    return root;
}

struct node *deleteNode(struct node *root, int value){

    struct node* iPre;
    if (root == NULL){
        return NULL;
    }
    if (root->left==NULL&&root->right==NULL && root->data==value){
        free(root);
        return NULL;
    }

    //searching for the node to be deleted
    if (value < root->data){
        root-> left = deleteNode(root->left,value);
    }
    else if (value > root->data){
        root-> right = deleteNode(root->right,value);
    }
    //deletion strategy when the node is found
    else{
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
    return root;
}

void inOrder(struct node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root=root->right);
    }
}


int main(){
   
    struct node *p = createNode(4);    //root node
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(5);
    struct node *p4 = createNode(2);
   // Finally The tree looks like this:
    //      4
    //     / \
    //    2   6
    //   /   /
    //  1   5 

    p->left = p4;
    p->right = p2;
    p4->left = p1;
    p2->left=p3;
    insert(p,100);
    insert(p,20);
    inOrder(p);
    printf("\n");
    p=deleteNode(p,5);
    inOrder(p);


    return 0;
}
