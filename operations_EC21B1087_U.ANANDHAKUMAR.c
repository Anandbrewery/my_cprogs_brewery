#include <stdio.h>
int main()
{
int num1,num2,sum1,prod1,diff1;
float num3,num4,sum2,prod2,diff2,quo2,quo1;
printf("enter two integers");
scanf("%d%d",&num1,&num2);
sum1=num1+num2;
diff1=num1-num2;
prod1=num1*num2;
quo1=(float)num1/(float)num2;
//
printf("addition of two integers:%d\n",sum1);
printf("subraction of two integers:%d\n",diff1);
printf("multiplication of two integers:%d\n",prod1);
printf("division of two integers:%f\n",quo1);
printf("enter two floating point numbers");
scanf("%f%f",&num3,&num4);
sum2=num3+num4;
diff2=num3-num4;
prod2=num3*num4;
quo2=num3/num4;
printf("addition of two floating point:%.2f\n",sum2);
printf("subraction of two integers:%.2f\n",diff2);
printf("multiplication of two integers:%.2f\n",prod2);
printf("division of two integers:%.2f\n",quo2);
}

