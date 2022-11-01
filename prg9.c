#include<stdio.h>

int main()
{
    int no,even,odd,i,sum=0,add=0;
    
    even=odd=0;
    
    printf("\n Enter any number:");
    scanf("%d",&no);
    
    for(i=no;i!=0;i/=10)
    {
       if((i%2)==0)
       {
           even++;
           sum=sum+i;
           }
       else{
            odd++;
            add=add+i;
            }
            }
            printf("\n Even digit=%d \t odd digits=%d",even,odd);
            printf("\n Sum of even number is :%d",sum);
            printf("\n Sum of odd number is :%d",add);
            getch();
            return 0;
}
