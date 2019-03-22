#include<stdio.h>

int main() 
{
   int a,b,c=1,i;
   scanf("%d %d",&a,&b);
   i=b;
   while(b)
   {
       b=b/10;
        c=c*10;
   }
   a=a*c+i;
   printf("%d",a);
}
