#include<stdio.h>
int main()
{
    int a=100;
    int *ptr;
    ptr=&a;

    printf("The Address of a is %p\n",&a);
    printf("The Address pf ptr is %p\n",&ptr);
    printf("The value is %d",*ptr);

}