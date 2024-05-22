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

int sumElementsLessThanK(struct node* root, int k) {
    if (root == NULL) {
        return 0;
    }

    if (root->data >= k) {
        return sumElementsLessThanK(root->left, k);
    } else {
        return root->data + sumElementsLessThanK(root->left, k) + sumElementsLessThanK(root->right, k);
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
    insert(p,200);
    int sum=sumElementsLessThanK(p,4);
    printf("%d",sum);
    
    return 0;
}