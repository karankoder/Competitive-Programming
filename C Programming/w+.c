#include<stdio.h>
int main()
{ 
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "w+");
    char str[100];     
    // fgets(str, 100, ptr);
    // printf("The string is %s\n", str);       // if you try to read in this mode then first of all it trucates the whole file to zero length.
    // fscanf(ptr,"%s",str);
    // printf(" extracted string : %s",str);
    fputs("my name is karan",ptr);
    // fclose(ptr);
    // fgets(str, 5, ptr);
    // printf("The string is %s\n", str);       // we cant read in thus mode.
    fclose(ptr);

    return 0;
}