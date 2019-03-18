#include<stdio.h>

int main() {
   int x,a,b[100],m;
   scanf("%d",&a);
   int i=0;
   while(a)
   {
       x=a%10;
       b[i]=x;
       a=a/10;
       i++;
   }
   m=i;
   for(i=m-1;i>=0;i--)
   {
   printf("%d ",b[i]);
   }
}
