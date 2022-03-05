/*
U.ANANDHAKUMAR
EC21B1087
EMPLOYEE
*/
#include<stdio.h>
#include<string.h>
struct employee
{
     char name[10];
     char gen;
     char role[10];
     int  id; 
     int  age; 
     int  sal;
};

int main()

{
    int n=0;
    int ch,l,i,y=0,j=0; 
    float c;
    char s[1];
    while(n<1)// getting valid number of employee
    {
        printf("Enter the number of employees: ");
        scanf("%d",&n);
        if(n>0)
        {
            struct employee emp[n];// setting the array of structures
            while(n>0)
            {
                printf("1. Set Employee Details\n2. Search Employee\n3. Display Employee Details\n4. Raise Salary\n5. Exit\n");
                printf("Enter your choice: ");
                scanf("%d",&ch);
                if(ch==1)
                {
                    for(i=0;i<n;i++)// getting employee details in an one by one
                    {
                        //name
                        printf("enter the name of the employee: ");
                        scanf("%s",emp[i].name);
                        y=0;
                        //id of employee
                        while(y==0)
                        {
                            j=0;
                            printf("Enter the  id  of the employee: ");
                            scanf("%d",&l);
                            if (emp[j].id==l)
                            {
                                printf("employee id already exist please enter new id\n\n");
                                y=0;
                            }
                            else
                            {
                                emp[i].id=l;
                                y=1;
                            }
                            j=j+1;
                        }
                        //gender
                        y=0;
                        while(y==0)
                        {
                            printf("enter the gender of the employee(M/F/O): ");
                            scanf("%s",s);
                            l=!(strcmp(s,"m"))||!(strcmp(s,"f"))||!(strcmp(s,"o"))||!(strcmp(s,"M"))||!(strcmp(s,"F"))||!(strcmp(s,"O"));
                            if(l==1)
                            {
                                emp[i].gen=s[0];
                                y=1;
                            }
                            else
                            {
                                printf("Invalid gender\n\n");
                            }
                        }
                        //age
                        y=0;
                        while(y==0)
                        {
                            printf("enter the age of the employee: ");
                            scanf("%d",&l);
                            if(l<18 || l>75)
                            {
                                printf("invalid working class age\n\n");
                            }
                            else
                            {
                                emp[i].age=l;
                                y=1;
                            }
                        }
                        printf("enter the salary of the   employee: ");
                        scanf("%d",&emp[i].sal);
                        printf("enter the job role of the employee: ");
                        scanf("%s",emp[i].role);
                    }    
                } 
                else if(ch==2)
                {
                    y=0;
                    printf("enter the employeeid to be searched: ");
                    scanf("%d",&l);
                    for(i=0;i<n;i++)//iterating the loop to check whether employee is there or not
                    {
                        if (emp[i].id==l)
                        {
                            printf("employee is present in database\n\n");
                            y=1;
                        }
                    }
                    if (y==0)// if employee is not there y value would not change
                    {
                       printf("employee is not present in database\n\n"); 
                    }
                }
                else if(ch==3)
                {
                    y=0;
                    printf("enter the employeeid to be searched:");
                    scanf("%d",&l);
                    for(i=0;i<n;i++)// searching for employee in the array of structure
                    {
                        if (emp[i].id==l)
                        {
                            printf("employee  name   :%s\n",emp[i].name);
                            printf("employee  id     :%d\n",emp[i].id);
                            printf("employee  age    :%d\n",emp[i].age);
                            printf("employee  gender :%c\n",emp[i].gen);
                            printf("employee  jobrole:%s\n",emp[i].role);
                            printf("employee  salary :%d\n\n",emp[i].sal);
                            y=1;
                        }
                    }
                    if (y==0)// if employee is not there y value would not change
                    {
                       printf("employee is not present in database\n\n"); 
                    }
                
                }
                else if(ch==4)// settung employee details
                {
                        y=0;
                        //id of employee
                        while(y==0)
                        {
                            j=0;
                            printf("Enter the  id  of the employee: ");
                            scanf("%d",&l);
                            printf("%d",j);
                            while(j<n)
                            {
                                if (emp[j].id==l)
                                {
                                    int x=0;
                                    while(x==0)
                                    {
                                        float c=0;
                                        printf("enter the raise value: ");
                                        scanf("%f",&c);
                                        if(c>0 && c<=2)
                                        {
                                            printf("old_salary:%d\n\n",emp[j].sal);
                                            emp[j].sal=emp[j].sal*c+emp[j].sal;
                                            printf("new_salary:%d\n\n",emp[j].sal);
                                            y=1;
                                            x=1;
                                        }
                                        else if(c<=0||c>2)//out of range raise value
                                        {
                                            printf("invalid raise value\n\n");
                                            c=-1;
                                        }
                                    }
                                }
                                else if(j==n-1)//non ec=xisting employee
                                {
                                    printf("invalid employee id\n\n");
                                    j=n;
                                }
                                j=j+1;
                            }
                        }
                }
                else if(ch==5)//exiting from enu
                {
                    break;
                }
                else// invalid choices such as negative numbers,0 and ch>5
                {
                    printf("invalid choice\n");
                }
            }
        }
        else// for invalid n values
        {
            printf("invlaid n value\n");
        }
    }
}
    





