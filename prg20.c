#include<stdio.h>

int main()
{
    int no,even,odd,i;
    
    even=odd=0;
    
    printf("\n Enter any number:");
    scanf("%d",&no);
    
    for(i=no;i!=0;i/=10)
    {
       if((i%2)==0)
       {
           even++;
           }
       else{
            odd++;
            }
            }
            printf("\n Even digit=%d \t odd digits=%d",even,odd);
            getch();
            return 0;
}
