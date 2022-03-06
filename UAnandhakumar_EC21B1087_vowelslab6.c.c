/*
U.ANANDHAKUMAR
EC21B1087
VOWELS
*/
#include <stdio.h>
int main()
{
	int n,i,vow=0;//n=length of the string;i=iterable variable;vow=vowel count
	printf("emter the array length:");
	scanf("%d",&n);
	if(n>0 && n<=50)
		   {
			char a[n];// declaring array 
		    	printf("\nENTER A STRING: ");
		    	for(i=0;i<=n;i++)// getting the input from user
		    	{
		    	    scanf("%c",&a[i]);
		    	}
		    	a[i]='\0';
		    	printf("%s", a);
		    	for(i=0;i<=n;i++)//counting vowels in string
		    	  {
		    		switch (a[i])
		    		{
		    		    case 'a':
		    		    case 'A':
		    		    case 'e':
		    		    case 'E':
		    		    case 'i':
		    		    case 'I':
		    		    case 'o':
		    		    case 'O':
		    		    case 'u':
		    		    case 'U':
		    		         vow++;
		    		         break;
		    		}  
			   }
		    	printf("\nTHERE ARE %d VOWELS IN THE STRING\n",vow);
		        }
                  else
		        {
		              printf("invalid input\n");
		        } 
}
