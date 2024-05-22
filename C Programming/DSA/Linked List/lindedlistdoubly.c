#include<stdio.h>
#include<stdlib.h>

struct node{
    int key;
    struct node *next;
    struct node *prev; 
};

void traversal(struct node *head){
    while(head!=NULL){
        printf("%d\n",head->key);
        head=head->next;
    }
}

void reverse(struct node *head){
    struct node *ptr=head;
    while(ptr->next!=NULL)
    ptr=ptr->next;
    while(ptr!=NULL){
        printf("%d\n",ptr->key);
        ptr=ptr->prev;
    }
}

struct node * insertatfirst(struct node *head, int key){
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    struct node *p=head;
    ptr->next=head;
    ptr->key=key;
    head->prev=ptr;
    ptr->prev=NULL;
    head=ptr;
    return head;
}


int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    fifth=(struct node *)malloc(sizeof(struct node));

    head->prev=NULL;
    head->key=10;
    head->next=second;

    second->key=20;
    second->next=third;
    second->prev=head;

    third->key=5;
    third->next=fourth;
    third->prev=second;

    fourth->key=20;
    fourth->next=fifth;
    fourth->prev=third;

    fifth->key=40;
    fifth->next=NULL;
    fifth->prev=fourth;

    traversal(head);
    head=insertatfirst(head,80);
    printf("\n");
    // traversal(head);
    reverse(head);

    return 0;
}