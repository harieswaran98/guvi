#include<stdio.h>

int main()
{
   int x,b,i,j,y,z;
   scanf("%d %d",&x,&b);
  // printf("%d %d ",x,b);
   if(x<b)
   {
       y=x;
       x=b;
       b=y;
       
   }
  z=x;   //printf("%d ",z);
  while(z)
  {
   if((z%x==0)&&(z%b==0))
   {
   printf("%d",z);
   z=0;
   }
   else
   z++; // printf("%d ",z);
  }
   
  
}
