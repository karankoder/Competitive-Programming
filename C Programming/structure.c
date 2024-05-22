#include <stdio.h>
#include <string.h>
struct student
{
    int roll_no;
    char name[10];
    int salary;
    int doj;
} s1;
int main()
{
    s1.roll_no = 22075041;
    strcpy(s1.name, "karan");
    s1.doj = 12012023;
    s1.salary = 2050000000;
    printf("name of the student 1 is %s \n", s1.name);
    printf("roll no of the student 1 is %d \n", s1.roll_no);
    printf("doj of the student 1 is %d \n", s1.doj);
    printf("slalay of the student 1 is %d \n", s1.salary);

    union student
    {
        int roll_no;
        char name[10];
        int salary;
        int doj;
    } s1;
    s1.roll_no = 14;
    strcpy(s1.name, "abcd");
    s1.doj = 1234;
    s1.salary = 100000000;
    printf("name of the student 2 is %s \n", s1.name);
    printf("roll no of the student 2 is %d \n", s1.roll_no);
    printf("doj of the student 2 is %d \n", s1.doj);
    printf("slalay of the student  is %d \n", s1.salary);
    return 0;
}