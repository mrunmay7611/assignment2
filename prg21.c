#include<stdio.h>

int main()
{
    int n,count,sum=0;
    
    printf("Enter n:\n");
    scanf("%d",&n);
    
    for(count=1;count<=n;count++)
    {
       if(count%2==0)
       sum=sum+count;
       }
       printf("Sum of even number is :%d",sum);
       getch();
       return 0;
       }
       
