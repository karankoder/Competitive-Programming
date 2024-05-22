#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}
int AddNumber (int n1, int n2){
    return n1+n2;
}
void greet()
{
    printf("Hello world my user good morning%d\n");
}

int main()
{
    printf("The sum of 1 and 2 is %d\n", sum(1,2)); // Testing the function
    int (*fPtr) (int, int); // Declaring a function pointer
    fPtr = &sum;// Creating a function pointer         vvvvvvi- we can remove & operator.
    int d = (*fPtr)(4, 6); // Dereferencing a function pointer          vvvvvvi- we can remove * also.
    printf("The value of d is %d\n", d);



    // take a look into it
    int (*fun) (int, int);
    fun = AddNumber;
    int res1 = fun(20, 20);
    int res2 = AddNumber(20, 20);
    printf("Using function pointer: %d",res1);
    printf("\nUsing function name: %d",res2);
    return 0;
}
