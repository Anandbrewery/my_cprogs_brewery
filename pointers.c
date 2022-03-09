#include <stdio.h>
#include <math.h>

int division( int dividend , int divisor , int *quotient , int *remaind )
{
    *quotient=dividend / divisor;
    *remaind=dividend % divisor;
}

float series(int x , int n)
{
    float sum=1;
    float fact=1;
    for(int i=1 ; i <= n ; i++)
        {
            fact = fact * i ;
            sum  = sum + pow( x , i ) / fact ; 
        }
}

int main()
{
    int ch=0;
    int i;
    while(1)
    {
        printf("1. Division\n2. Series\n3. Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        if( ch==1 )
            {
                int dividend,divisor=0,quotient,remaind;
                printf("enter the number sequentially.\n");
                for(i=0 ; i<2 ; i++)
                {
                    
                    if( i==0 )
                        {
                            printf("Number%d : ",i+1);
                            scanf("%d",&dividend);
                        }
                        
                    else
                        {
                            while( divisor == 0 )
                                {
                                    printf("Number%d : ",i+1);
                                    scanf("%d",&divisor);    
                                    if(divisor == 0)
                                        {
                                            printf("division by 0 not possible\n");  
                                        }
                                }
                        }
                }
                division(dividend,divisor,&quotient,&remaind);
                printf("the quotient and remainder are %d and %d respectively\n",quotient,remaind);
            }
        
        else if( ch==2 )
            {
                int x=0,n=0;
                float m;
                for(i=0 ; i<2 ; i++)
                {
                    
                    if( i==0 )
                        {
                            while(x<1)
                                {
                                    printf("Number x : ");
                                    scanf("%d",&x);
                                    if(x<1)
                                        {
                                            printf("Invlaid x value\n");
                                        }
                                }
                        }
                    else
                        {
                            while(n<1)
                                {
                                    printf("Number n : ",i+1);
                                    scanf("%d",&n);
                                    if(n<1)
                                    {
                                        printf("Invalid n value\n");
                                    } 
                                }
                        }
                }
                m=series( x , n );
                printf("the sum of series is : %.2f\n",m);
            }
        
        else if( ch==3 )
            {
                break;
            }
            
        else
            {
                printf("Invalid choice\n");
            }
        
    }
    return 0;
}
