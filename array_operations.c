#include <stdio.h>
#include <ctype.h>

int reverse(int n, int a[n])
{
    printf("hi");
    int i,j=n;
    int temp;
    for(i=0 ; i<n ; i++)
    {
        j-=1;
        if(i<=j)
        {
            temp=*(a+i);
            *(a+i)=*(a+j);
            *(a+j)=temp;
        }
    }
    return 0;
}
int linear_search(int a,int n,int arr[n])
{
    int i=0;
    for(i=0 ; i<n ; i++)
    {
        if(arr[i]==a)
        {
            return i;
        }
    }
    if(i==n-1)
    {
        return -1;
    }
}
int bubble_sort(int n,int a[n])
{
    int flag=0;
    int temp;
    for(int i=0 ; i<n-1 ; i++)
    {
        for(int j=0 ; j<n-1-i ; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=*(a+j);
                *(a+j)=*(a+j+1);
                *(a+j+1)=temp;
                flag=1;
            }
        }
        if (flag==0)
        {
            break;
        }
    }    
}

int main()
{
    int ch=3,n,i;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter your array: ");
    for(i=0 ; i<n ; i++)
    {
        printf("\nelement %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    while(1)
    {
        
        printf("1. Reverse\n2. Linear Search\n3. Bubble Sort\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        if(ch==1)
        {
            reverse(n,arr);
            printf("the reverse of the list is:");
            printf("\t|\t");
            for(i=0 ; i<n ; i++)
            {
                printf("%d\t",arr[i]);
            }
            printf("|\n");
        }
        else if(ch==2)
        {
            printf("Enter the number to be searched: ");
            scanf("%d",&i);
            ch=linear_search(i,n,arr);
            if(ch==-1)
            {
                printf("the number is not present in the array\n\n");
            }
            else
            {
                printf("the number is present at %d\n\n",ch);
            }
        }
        else if(ch==3)
        {
           printf("The sorted array : ");
           bubble_sort(n,arr);
           for(i=0 ; i<n ; i++)
           {
               printf("%d",arr[i]);
           }
           printf("\n");
        }
        else if(ch==4)
        {
            break;
        }
        else 
        {
            printf("The choice is invalid\n\n");
        }
    } 
}
