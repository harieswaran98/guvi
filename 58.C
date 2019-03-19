#include<stdio.h>

int main() {
   int a,b,d=0,e=0,c[100],i,j;
   scanf("%d %d",&a,&b);
   for(i=0;i<a;i++)
   {
       scanf("%d",&c[i]);
       if(c[i]==b)
       d++;
   }
   if(d>0)
   printf("yes");
   else
   printf("no");
   
  
}
