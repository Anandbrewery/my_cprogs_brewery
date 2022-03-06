#include <stdio.h>
#include <math.h>
#include <ctype.h>
long long int bin(int num)//binary number conversion
{
    long long int  binary = 0;
    int position = 0;
    while (num > 0)//conversion to binary by dividing it by 2
    {
        int digit = num % 2;
        binary += digit * pow(10, position);
        position += 1;
        num /= 2;
    }
    return binary;
}
long long int oct(int num)//octal number conversion
{
    long long int  oct = 0;
    int position = 0;
    while (num > 0)//conversion to octal by dividing it by 8
    {
        int digit = num % 8;
        oct += digit * pow(10, position);
        position += 1;
        num /= 8;
    }
    return oct;
}
int hex(int num)//hexadecimal number conversion
{
    int  binary = 0;
    char hex[100];
    char alpha[6]={"ABCDEF"};
    int position = 0;
    while (num > 0)//conversion to hexadecimal by dividing it by 16
    {
        int digit = num % 16;
        if(digit<10)
            hex[position]=digit;
        else
            hex[position]=alpha[digit-10];
        position += 1;
        num /= 16;
    }
    for(int i=position-1 ; i>-1 ; i--)// printing the number in reverse order from msb to lsb
    {
    	if(isalpha(hex[i]))
        		printf("%c",hex[i]);
	else
		printf("%d",hex[i]);
    }
    return 0;
}
int main()
{
 	int ch,flag=0,num;
	while(1)// main menu
		{
			  printf("1. Get Decimal\n2. Display Binary\n3. Display Octal\n4. Display Hexadecimal\n5. Exit\n");
			  printf("Enter the choice; ");
			  scanf("%d",&ch);
			  if(ch==1)// innputting decimal number
			  	{
			  		flag=0;
			  		while(flag==0)// getting valid number
			  		{
				  		printf("Enter the number: ");
				  		scanf("%d",&num);
				  		if (num < 0 )// if number is negative again getting the number from user
				  			printf("Enter valid number\n");
				  		else// for valid numbers terminating loop by breaking loop condition
				  			flag=1;
				  	}
			  	}
			  else if(ch==2 && flag==1)// binary number conversion
			  	{
			  		printf("The number in binary format is : %lld\n",bin(num));
			  	}
			  else if(ch==3 && flag==1)// octal number conversion
			  	{
			  		printf("The number in octal format is : %lld\n",oct(num));
			  	}
			  else if(ch==4 && flag==1)// hexadecimal number conversion
			  	{
			  		printf("The number in hexadecimal format is : ");
			  		hex(num);
			  		printf("\n");
			  	}
			  else if(ch==5)//exting the menu
			  	{
			  		break;
			  	} 
			  else if(ch>5 || ch<1 || flag==0)//invalid choice and invalid number input under choice 1
				{
					if (ch>5 || ch<1)// for invalid choice values
						printf("Invalid choice\n");
					else// for invalid entry of numbers
						printf("Please update the valid number under choice 1!\n");	
				}	
		}	
}
