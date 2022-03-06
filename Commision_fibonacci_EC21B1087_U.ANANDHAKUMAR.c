#include <stdio.h>
int main()
{
int quantity,base_salary=1500,bonus=200;
float commission=0.02,Gross_salary,price;
printf("enter the quantity");
scanf("%d",&quantity);
printf("enter the quantity");
scanf("%f",&price);
Gross_salary=base_salary+(quantity*bonus)+(quantity*price)*commission;
printf("Gross salary for the sales person is:%f\n",Gross_salary);
}
