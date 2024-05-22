// for opening of file
//ptr = fopen(“file_location”,”mode”);
#include<stdio.h>
int main()
{ 
    // reading mode
    FILE *ptr = NULL;
    char str[100];
    ptr = fopen("myfile.txt","r");
    fscanf(ptr,"%s",str);
    printf(" extracted string : %s",str);
    // char str[128] = "Welcome to code with Harry";
    // fscanf(ptr, "%s", str);
    // printf("%s",str );

    // writing mode
    //char str[128] = "Empty";
    //ptr = fopen("myfile.txt","w");    // it will remove the previous data and replace with new ones.
    //fprintf(ptr, "%s", str);          // but if you open the file in append mode then it will append at the end of the data. 



    fclose(ptr);
    return 0;
}


