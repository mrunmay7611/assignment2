#include<stdio.h>

int main()
{
    int a,b,c,max1,max2;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    
    max1=(a>b)?a:b;
    max2=(max1>c)?max1:c;
    printf("Greatest number amongt %d %d and %d is %d \n",a,b,c,max2);
    getch();
    return 0;
}
