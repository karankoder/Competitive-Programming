#include <stdio.h>
#include <stdlib.h>
int main(){
    int t;
    int *ptr; 
    scanf("%d",&t);
    ptr = (int *)malloc(t * sizeof(int));
    for (int i=0; i<t; i++) {
    scanf("%d",&ptr[i]);
    }
    for(int i=0;i<t;i++)
    {
        int sum=0;
        while(ptr[i]--)
        {
            if(((ptr[i])%3)==0 || ((ptr[i])%5)==0)
            sum=sum+(ptr[i]);
        }
        printf("%d\n",sum);
    }
    free(ptr);
    return 0;
}
