#include <stdio.h>
#include <math.h>
int input(int arr[8])
{
    for(int i=0 ; i<8 ; i++)
    {
        printf("Element%d:",i);
        scanf("%d",&arr[i]);
    }
    return 0;
}
int deci(int arr[8])
{
    int num=0,flag=0;
    for(int i=1 ; i<8 ; i++)
    {
        if(arr[0]!=1)
        {
            num=num+arr[i]*pow(2,7-i);
        }
        else
        {
           flag=1;
           num=num+arr[i]*pow(2,7-i);
        }
    }
    if(flag==1)
    {
        num=num-128;
    }
    return num;
}
int main()
{
    int arr[8],num;
    input(arr);
    num=deci(arr);
    printf("%d",num);
    return 0;
}
