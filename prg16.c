#include<stdio.h>

int main()
{
    int r[5],i,j,k,n;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("\n Enter numbers:");
    for(i=0;i<n-1;i++)
    {
       scanf("%d",&r[i]);
       }
       for(j-i+1;j<n;j++)
       {
          if(r[i]==r[j])
          {
             for(k=j;k<n;k++)
             {
                 r[k]=r[k+1];
                 }
                 n--;
                 j--;
                 }
                 }
                 
                 printf("\n array after removing duplicate numbers");
                 for(i=0;i<n;i++)
                 {
                                 printf("%d",&r[i]);
                                 }
                                 
             getch();
             return 0;
             }
       
