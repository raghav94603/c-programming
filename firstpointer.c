#include<stdio.h>
int main()
{
    int a=100;
    int *ptr;
    ptr=&a;

    printf("The Address is %p\n",&ptr);
    printf("The value is %d",*ptr);

}