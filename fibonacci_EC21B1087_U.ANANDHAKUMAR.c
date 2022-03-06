/*
fibonacci series
U.ANANDHAKUMAR 
EC21B1087
*/
#include<stdio.h>
int main()
{
int a=0,b=1,c,n;// first two terms a and b;c=temporary sum/swap variable;n=number of terms to be printed
printf("enter the n value(number of terms to printed)");
scanf("%d",&n);// fetching how many terms to be printed 
if (n==1){printf("0\n");}// if input n=1 printing first term (0)
else if(n==2){printf("0,1\n");}// if input n=2 printing first and second term (0,1)
else if(n<0){printf("wrong input\n");}//as number of terms cannot be negative
else{
printf("%d,%d\n",a,b);// printing the first two terms 
while (n-2>0) // while loop
{
    c=a+b; // summing up last two terms 
    printf(",%d\n",c);
    a=b;//swapping 1st last to second last term
    b=c;// swapping new last term to first last term
    n--;
}
/*
do  // do while loop
{c=a+b;// summing up last two terms 
    printf(",%d\n",c);
    a=b;//swapping 1st last to second last term
    b=c;// swapping new last term to first last term
    n--;
}while(n-2>0);
*/
/*
for (n;n-2>0;n--) // for loop
{
c=a+b;// summing up last two terms 
printf(",%d\n",c);
a=b;//swapping 1st last to second last term
b=c;//swapping new last term to first last term
}
*/
}
return 0;
}
