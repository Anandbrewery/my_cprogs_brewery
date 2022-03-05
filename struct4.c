#include<stdio.h>
#include<math.h>
int palindrome(int num)
{
    int temp1=0,temp2;
    temp2=num;
    while(num>0)//reversing the number
	    {
	     temp1=temp1*10+ num%10;
	     num=num/10;
	    }
    temp2=temp2==temp1? 1 : 0;	//checking whether number is equal to its reverse form
    return temp2;
}
int armstrong(int num)
{
	int temp,c=0,x,sum=0;
	temp=num;
	while(temp!=0)// counting total number of digits
		{
			temp=temp/10;
			c+=1;
		}
	temp=num;//reseting the temp value
	while(temp!=0)//removing digits from right to left and raising them to corresponding exponent(totla number of digits)
		{
		 x=temp%10;
		 sum+=pow(x, c);
		 temp=temp/10;
		} 
           temp=sum==num?1 : 0;//if sum of digits raised to exponent is equal to num printing armstrong
	return temp;
}
int main()
{
	int ch,flag=0,num;
	while(1)
	{
		printf("1. Get the number\n2. Check Palindrome\n3. Check Armstrong\n4. Exit\n");//main menu
		printf("Enter the choice; ");// giving our choice
		scanf("%d",&ch);
		if (ch==1)// getting the number
		{
			flag=0;
	  		while(flag==0)// getting valid input from user
	  		{
		  		printf("Enter the number: ");
		  		scanf("%d",&num);
		  		if (num < 0 )// invalid input
		  			printf("Enter valid number\n");
		  		else// valid input
		  			flag=1;
		  	}
		}
		else if (ch==2 && flag==1)//palindrome number  checking
		{
			ch=palindrome(num);
			ch==1?printf("the number %d is palindrome\n",num) : printf("the number %d is not palindrome\n",num);	
		}
		else if (ch==3 && flag==1)// armstrong number checking
		{
			ch=armstrong(num);
			ch==1?printf("the number %d is armstrong\n",num) : printf("the number %d is not armstrong\n",num);
		}
		else if (ch==4)//exiting the menu
		{
			break;
		}
		else if(ch>4 || ch<1 || flag==0)// invalid choices or when number is not updated under choice 1
		{
			if (ch>4 || ch<1)// invalid choices
				printf("Invalid choice\n");
			else// number not updated
				printf("Please update the valid number under choice 1!\n");	
		}
	}
}
