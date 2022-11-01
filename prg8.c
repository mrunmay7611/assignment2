#include<stdio.h>

int main()
{
    int no,i;
    long fact=1;
    
    printf("Enter any number\n");
    scanf("%d",&no);
    
    for(i=no;i>1;i--)
    {
                    fact=fact*i;
                    }
                    
    printf("\n factorial of number is :%ld",fact);
    getch();
    return 0;
}
