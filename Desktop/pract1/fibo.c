/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,a=0,b=1,c=0,n;
    printf("enter\n");
    scanf("%d",&n);
    printf("%d %d",a,b);printf(" ");
   for(i=0;i<n-2;i++)
   {
       c=a+b;
       printf("%d",c);
       printf(" ");
       a=b;
       b=c;
       
   }
    
        
    
    return 0;
}
