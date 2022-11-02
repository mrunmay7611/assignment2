#include<stdio.h>

int main()
{
    int n,r,sum,t;
    
    printf("Enter number");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
              r=n%10;
              printf("%d",r);
              n=n/10;
              sum=(sum*10)+r;
    }
   if(t==sum)
   printf("it is palinderome number\n");
             
   else
   printf("it is  not a palindrome number\n");
    getch();
    return 0;
}
