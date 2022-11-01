#include<stdio.h>

int main()
{
    int r,c,s;
    
    
    r=1;
    while(r<=5)
    {
               
               s=4;
               while(s>=r)
               {
                          printf(" ");
                          s--;
                          }
               c=1;
               while(c<=r)
               {
                          printf("%d",c);
                          c++;
                          }
               printf("\n");
               r++;
               }
               getch();
               return 0;
}
           
