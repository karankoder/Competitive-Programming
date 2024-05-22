#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{ 
    char s[100]="1234";
    char *ptr=s;
    if(strcmp(s,"abcd")==0)      // for checking whether two strings are same or not.
    printf("SUCESS\n");
    char *str;
    str=ptr;
    printf("%s\n",str);
    printf("%s\n",ptr);             // we can print using pointer also
    printf("%x\n",ptr);              // now it will print the address  
    int num= atoi(ptr);                 // for converting string into integer
    int num= atoi(s);
    printf("%d", num);
    return 0;

}