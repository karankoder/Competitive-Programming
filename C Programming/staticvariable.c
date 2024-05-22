#include <stdio.h>
int myfunc()
{
    static int i = 0;
    i++;
    return i;
}
int main()
{
    printf("Value:%d", myfunc());
    printf("\nValue:%d", myfunc());
    return 0;
}

/*
Static global variable
If we declare the variable with a static keyword outside the function, then it is known as a static global variable. This variable will be accessible throughout the program.

Static local variable
When a variable with a static keyword is declared inside a function is known as a static local variable. The scope of the static local variable will be the same as the local variables, but its memory will be available throughout the execution of the program.
Static variable memory is allocated within a static variable.
A static variable will retain the value even after they exit the scope.
Static variable memory is available throughout the program.
If we do not assign any value to the static variable, then the default value will be 0.*/