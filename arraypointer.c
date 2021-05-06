#include<stdio.h>
int main()
{
    int arr_ptr[50],i;
    for(i=0;i<4;i++)
    {
        printf("&arr_ptr[%d] = %p \n",i,&arr_ptr[i]);
        
    }
    return 0;

}