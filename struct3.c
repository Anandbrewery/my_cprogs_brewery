/*
U.ANANDHAKUMAR
EC21B1087
HOTEL BILL
*/
#include<stdio.h>
#include<string.h>
struct menu
{
    int nos;
    char item[20];
    float price;
};
struct bill
{
 char item[20];
 float price;
 int qty;
};
int main()
{  
    int n=-1,y=0,ch=1,i=0,j=0;
    float l=0,g=0;
    char s[20];
    int k,temp,qty;
    while(n<0)// getting valid number of items
    {
        printf("enter the number of items: ");
        scanf("%d",&n);
        if(n>0)// valid number of items
        {
            struct menu menu[n];// declaring menu
            while(ch>0&&ch<6)//valid choice options
            {
                printf("1. Set Item and Price\n2. Reset Price\n3. Bill\n4. Display Items and Price\n5. Exit\n");
                printf("enter your choice: ");
                scanf("%d",&ch);// inputting our choice
                if(ch==1)//setting the menu items
                {
                    while(i<n)// for inputting valid number 
                    {
                        while(l==0)//items without duplicate entry
                        {
                            y=0;
                            printf("enter the item_name: ");
                            scanf("%s",s);
                            for(int j=0 ; j<i ; j++)
                                {
                                    if (strcmp(menu[j].item,s)==0)
                                    {
                                        printf("item already exist.Enter a new item\n\n");
                                        y=1;
                                        break;
                                    }
                                }
                            if(y==0)
                            {
                                strcpy(menu[i].item,s);
                                menu[i].nos=1100+i;
                                printf("this item is alloted a item number: %d\n\n",menu[i].nos);
                                l=-1;
                            }
                        }
                        while(l==0 || l<0)// valid price entry
                        {
                             printf("enter the price: ");
                             scanf("%f",&l);
                             if(l==0 || l<0)
                             {
                                 printf("invalid price value assigned!\n\n");
                                 l=0;
                                 break;
                             }
                             else if(l>0)
                             {
                                 menu[i].price=l;
                                 l=1;
                                 i=i+1;
                             }
                        }
                        l=0;
                    }
                    
                }
                else if(ch==2)// updating price of the item
                {
                    l=0;
                    printf("Enter the item number: ");
                    scanf("%d",&y);
                    for(i=0;i<n;i++)
                    {
                        if(menu[i].nos==y)// searching the item via item number
                        {
                            while(l==0 || l<0)
                            {
                                 printf("enter the price to be reset: ");
                                 scanf("%f",&l);
                                 if(l==0 || l<0)
                                 {
                                     printf("invalid price value assigned!\n\n");
                                     l=1;
                                 }
                                 else if(l>0)
                                 {
                                     menu[i].price=l;
                                     printf("the price of the new item %s has been set to %.2f\n\n",menu[i].item,menu[i].price);
                                     l=1;
                                     i=i+1;
                                     break;
                                 }
                            }
                        }
                    }
                }
                else if(ch==3)// printing the bill for the user
                {
                    l=0;
                    char c[20];
                    j=0;
                    y=0;
                    while(l==0)
                    {
                        printf("enter the unique number of items:");// unique number of items except quantity
                        scanf("%d",&k);
                        temp=k;
                        while(k!=0 || k>0 )// checkinng whether unique k items and checking whether kis not greater than n
                        {
                            struct bill bill[k];
                            while(temp>0)  
                            {
                                printf("enter the item name:");
                                scanf("%s",c);
                                for(i=0 ; i<k ; i++)
                                {
                                    if(strcmp(menu[i].item,c)==0)
                                    {
                                        printf("enter the qty: ");
                                        scanf("%d",&qty);
                                        bill[j].qty=qty;
                                        strcpy(bill[y].item,menu[i].item);
                                        bill[j].price=menu[j].price*qty;
                                        y=1;
                                        j=j+1;
                                        temp=temp-1;
                                        break;
                                    }
                                }
                                if(y==0)
                                {
                                    printf("item does not exist in menu\n");
                                    
                                }
                            }
                            temp=k;
                            g=0;
                            printf("=====================          $BILL$           ======================\n");
                            printf("=====================       NAME  :  QTY  :  PRICE         ======================\n");
                            for (i=0 ; i<k ; i++)//bill printing with 15% tax
                            {
                                printf("                          %s      :    %d    :    %.2f\n",bill[i].item,bill[i].qty,bill[i].price);
                                g=g+bill[i].price;
                                if(i==k-1)
                                {
                                    k=0;
                                }
                            }
                            printf("            \t\t\ttotal bill amount  :   %.2f \n           ",g);
                            g=g+(0.15*g);
                            printf("                amount to be paid (incl of taxes) :  %.2f  \n          ",g);
                            printf("========================          $BILL$           ======================\n");
                            break;
                        }
                        k=temp;
                        l=1;
                        if(k==0 || k<0) // invalid entries
                        {
                            printf("invalid number of items\n\n");
                        }    
                    }
                }
                else if(ch==4)// displaying menu card to the user
                {
                  printf("*\t*\t*\t*\t*\t*\t|  MENU  |\t*\t*\t*\t*\t*\t*\n\n");
                  printf("\t\t\t\t\t||ITEM NUMBER|  NAME  : PRICE||\t\t\t\t\n");
                  for(i=0 ; i<n ; i++)
                  {
                      printf("\t\t\t\t\t||%d      |  %s     :  $%.2f ||\n",menu[i].nos,menu[i].item,menu[i].price);
                  }
                }
                else if(ch==5)// exitting the menu
                {
                    break;
                }
                else// invalid choice option
                {
                    printf("invalid choice!\n\n");
                    ch=1;
                }
            }
        }
        else// invalid number of items
        {
            n=-1;
            printf("invalid number of items!\n\n");
        }
    }
}
