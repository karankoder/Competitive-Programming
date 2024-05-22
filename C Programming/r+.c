#include<stdio.h>
int main()
{ 
    FILE *ptr= NULL;
    ptr= fopen("myfile.txt", "r+");
    char  c = fgetc(ptr);
    // printf("The character I read was %c\n", c );
    // c = fgetc(ptr);
    // printf("The character I read was %c\n", c );

    // char str[100];
    // fgets(str,100, ptr);
    // printf("The string is %s\n", str);
    // fclose(ptr);

    // fputc('o',ptr);
    // fputs("karan",ptr);
    // char str[128] = "Empty";
    // ptr = fopen("myfile.txt","w");    // it will remove the previous data and replace with new ones.
    // fprintf(ptr, "%s", str);             // observe what is printing in the r+ mode.

    return 0;
}