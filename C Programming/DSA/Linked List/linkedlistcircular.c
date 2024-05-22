#include<stdio.h>
#include<stdlib.h>
 
struct Node
{
    int data;
    struct Node *next;
};
 
void Traversal(struct Node *head){
    struct Node *ptr = head;
    printf("Element is %d\n", ptr->data);
    ptr = ptr->next;
    while(ptr!=head){
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    };
}
 
struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
 
    struct Node * p = head->next;
    while(p->next != head){
        p = p->next;

    }
    // At this point p points to the last node of this circular linked list
 
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
 
}

struct Node * deleteatfirst(struct Node * head){
    struct Node * ptr=head;
    struct Node *p=head->next;
    while(p->next!=head){
        p=p->next;
    }
    p->next=head->next;
    head=head->next;

    free(ptr);
    return head;
   
    
}
 
int main(){
    
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
 

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth =(struct Node *)malloc(sizeof(struct Node));
 
    
    head->data = 4;
    head->next = second;
 
    second->data = 3;
    second->next = third;
 
    third->data = 6;
    third->next = fourth;
 
    fourth->data = 1;
    fourth->next = fifth;

    fifth->data=10;
    fifth->next=head;
    Traversal(head);
    printf("\n");
    head=insertAtFirst(head, 20);
    Traversal(head);
    printf("\n");
    head=deleteatfirst(head);
    Traversal(head);
    return 0;
}
