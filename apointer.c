#include<stdio.h>
int main()
{
    int arr_sptr[6],i,sum=0;
    for(i=0;i<6;i++)
    {
        scanf("%d",arr_sptr+i);

        sum+=*(arr_sptr+i);
    }

    printf("The Sum of The numbers is : %d",sum);
}