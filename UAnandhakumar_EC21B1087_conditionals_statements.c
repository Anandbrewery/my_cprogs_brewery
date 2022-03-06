/*
ARITHEMIC OPERATORS conditional statements
U.ANANDHAKUMAR 
EC21B1087
*/
#include<stdio.h>
int main()
{
int n1,n2,a,b,c,e,o;
float d;
printf("Enter the two numbers");//getting numbers
scanf("%d%d",&n1,&n2);
printf("Enter the operator values as per key:values pair below");//choosing the operator
printf(" 'addition' : 1 , 'subraction' : 2 , 'multiplication' : 3 , 'divison': 4 ,'modulo':5\n");
scanf("%d",&o);
a=n1+n2;
b=n1-n2;
c=n1*n2;
d=(float)n1/(float)n2;
e=n1%n2;
/*
//only using switch case 
switch (o)
	 {
		 case 1:
			    printf("The sum of two numbers is:%d\n",a);//addition
			    break;
		 case 2:
			    printf("The subraction of two numbers is:%d\n",b);//subracting
			    break;
		 case 3:
			    printf("The product of two numbers is:%d\n",c);//multiplication
			    break;
		 case 4:
			    printf("The quotient of two numbers is:%.3f\n",d);//division
			    break;
		 case 5:
			    printf("The remainder of two numbers is:%d\n",e);//modulo
			    break;
                 default:
		               printf("Invalid choice\n");//invalid operation
		               break;
	 }
*/
/*
//only using only if 
if (o==1)
      {
      printf("The sum of two numbers is:%d\n",a);//addition
      }
if(o==2)
      {
      printf("The subraction of two numbers is:%d\n",b);//subracting
      }
if(o==3)
      {
      printf("The product of two numbers is:%d\n",c);//multiplication
      }
if(o==4)
      {
      printf("The quotient of two numbers is:%.3f\n",d);//division
      }
if(o==5)
      {
      printf("The remainder of two numbers is:%d\n",e);//modulo
      }
if (o>5 || o<1)
    {
     printf("Invalid choice\n");//invalid operation
    }
*/
/*
 //using else , if 
if (o==1)
      {
      printf("The sum of two numbers is:%d\n",a);//addition
      }
else if(o==2)
      {
       printf("The subraction of two numbers is:%d\n",b);//subracting
      }
else if(o==3)
      {
       printf("The product of two numbers is:%d\n",c);//multiplication
      }
else if(o==4)
      {
       printf("The quotient of two numbers is:%.3f\n",d);//division
      }
else if(o==5)
      {
       printf("The remainder of two numbers is:%d\n",e);//modulo
      }
else
     {
       printf("Invalid choice\n");//invalid operation
     }
*/
}
