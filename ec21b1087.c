// ***EC21B1087 U.ANANDHAKUMAR ***
#include<stdio.h>
int main()
{
    int a[22],great1,great2,i;// ARRAY OF 20 ELEMENTS, TWO GREATEST NUMBERS,ITERATOR
    for(i=0 ; i<21 ; i++)// INPUTTING THE ELEMENTS OF ARRAY
    {
        printf("element %d: ",i);
        scanf("%d",&a[i]);
        if(i==1 || i==0)// COMPARING EITHER A[1] OR A[0] WHICH IS GREATEST
        {
         great2=a[0];
         if(i==1)//COMPARING AND STORING SECOND GREATEST NUMBER AND FIRST GREATEST NUMBER
         {
            if (a[i]>great2)
            {
                great1=a[i];
            }
            else
            {
                great1=great2;
                great2=a[i];
            }
         }
        }
        if(great2<a[i]<great1)
        {
            great2=a[i];
        }
        if(a[i]>great1)
        {
            great2=great1;
            great1=a[i];
        }
    }
    if(great2%2==0)// CHECKING WHETHER SECOND GREATEST NUMBER IS EVEN
    {
        
        for(i=20 ; i>6 ; i--)//INSERTING A[7]=100
        {
            a[i+1]=a[i];
        }
        a[7]=100;
        for(i=0 ; i<22 ; i++)// PRINTING THE ARRAY
        {
           printf("ELEMENT%d:%d\n",i,a[i]);
        }
    }
    else// IF THE SECOND GREATEST NUMBER IS ODD
    {
        for(i=7;i<20;i++)// DELETING THE SEVENTH ELEMENT
        {
            if(i!=21)
            {
                a[i]=a[i+1];
            }
        }
        for(i=0 ; i<19 ; i++)
        {
            printf("ELEMENT%d:%d\n",i,a[i]);
        }
    }
}
