#include<stdio.h>
#include<stdlib.h>
int max=-1;
struct stack{
    int size;
    int top;
    int *arr;  
    int max;
};

int isfull(struct stack *s){
    if(s->top==s->size-1)
    return 1;
    else 
    return 0;
}
void push(struct stack *s,int val)
{
    if(isfull(s))
    printf("stack overflow");
    else
    {
        s->top = s->top+1;
        s->arr[s->top]=val;
        if(val>max)
        max=val;
    }

}
int isempty(struct stack *s){
    if(s->top==-1)
    return 1;
    else 
    return 0;
}
int pop(struct stack *s){
    if(isempty(s))
    printf("stack underflow");
    else{
        int ans=s->arr[s->top];
        s->top=s->top-1;
        return ans;
    }

}


int main()
{
    int n;
    scanf("%d",&n);
    struct stack *s= (struct stack*)malloc(sizeof(struct stack));
    s->size=100;
    s->top=-1;
    s->arr=(int *)malloc(s->size * sizeof(int));
    s->max=-1;
    push(s,15);
    push(s,100);
    push(s,2);
    printf("max element= %d",max);
    return 0;
}