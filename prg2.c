#include<stdio.h>

int main()
{
    int a,b;
    
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    
    if(a%b==0)
    printf("The 1st number is multiple of 2nd number\n");
    else
    printf("The 1st number is not a multiple of 2nd number\n");
    
    getch();
    return 0;
}
