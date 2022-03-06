/*
MONEY_CONVERSIONS
U.ANANDHAKUMAR 
EC21B1087
*/
#include <stdio.h>
int main()
{
int x;//asking whether rupees to dollars,dollars to rupees
float y;//variable for amount of money input
printf("enter 1 if you want to convert rupees to dollars, 2 if you want to convert dollars to rupess");
scanf("%d",&x);
if (x==1)//Rupees to dollars
	{
	printf("enter the money in rupees:Rs.");
	scanf("%f",&y);
	printf("The money value in dollars:$%.3f\n",y/75);
	return 0;
	}
if (x==2)//Dollars to rupees
	{
	printf("enter the money in dollars:$");
	scanf("%f",&y);
	printf("The money value in rupees:Rs.%.3f\n",y*75);
	return 0;
	}
else
          {
           printf("Invalid number entered\n");
          }
}

