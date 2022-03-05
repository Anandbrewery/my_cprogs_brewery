/*
U.ANANDHAKUMAR
EC21B1087
complex numbers
*/
#include <stdio.h>
struct cmplx
{
   int r;
   int i;
}c1,c2;//structure complex numbers
int main()
{
    int ch,re,im;//choice,real and imaginary part after operatins
    int x=1;
    c1.r,c2.r=0,0;
    c1.i,c2.i=0,0;
    while(x==1)// main menu
    {
        printf("1. Set Complex Numbers\n2. Add Complex Numbers\n3. Subtract Complex Numbers\n4. Multiply Complex Numbers\n5. Exit\n");//selecting  your choice
        printf("Enter your choice: ");
        scanf("%d",&ch);
        if(ch==1)//complex numbers input from user
            {
                printf("enter the real imaginary part of complex number c1: ");
                scanf("%d %d",&c1.r,&c1.i);
                printf("enter the real imaginary part of complex number c2: ");
                scanf("%d %d",&c2.r,&c2.i);
                x=1;
            }
        else if (c1.r!=0 && c2.r!=0 && c1.i!=0 && c2.i!=0 && ch!=1 && ch!=5)// fundamental operations block and checking whether the complex number is from user
        {
            if(ch==2)// adding the complex number
            {
                re=c1.r+c2.r;
                im=c1.i+c2.i;
                if(im>0)// updating sign accordingly as per complex number as per imaginary part
                {
                printf("the sum of two complex number is:%d+%di\n",re,im);
                }
                else
                {
                printf("the sum of two complex number is:%d-%di\n",re,(-1)*im);
                }
                x=1;
            }
            else if(ch==3)// subracting the complex number
            {
                re=c1.r-c2.r;
                im=c1.i-c2.i;
                if(im>0)// updating sign accordingly as per complex number as per imaginary part
                {
                printf("the difference of two complex number is:%d+%di\n",re,im);
                }
                else
                {
                printf("the difference of two complex number is:%d-%di\n",re,(-1)*im);
                }
                x=1;
            }
            else if(ch==4)// multiplying the complex number
            {
                re=(c1.r*c2.r)-(c1.i*c2.i);
                im=(c1.i*c2.r)+(c1.r*c2.i);
                if(im>0)// updating sign accordingly as per complex number as per imaginary part
                {
                printf("the product of two complex number is:%d+%di\n",re,im);
                }
                else
                {
                printf("the product of two complex number is:%d-%di\n",re,(-1)*im);
                }
                x=1;
            }
        }
        else if(ch==5)// exiting the menu
            {
                break;
            }
        else if(ch>5 && ch<1)// invalid choice or out of choice 
        {
            printf("invalid choice\n");
            x=1;
        }
        else// when values of c1 and c2 not updated by user
        {
            printf("please enter the value of c1 c2\n");
            x=1;
        }
    }
    return 0;
}
