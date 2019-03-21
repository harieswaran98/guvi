#include<stdio.h>

int main()
{
   int x,b,i,j,y,z;
   char a[100];
   scanf("%s",&a);

   for(i=0;a[i]!='\0';i++)
   {
       if((a[i]>=48)&&(a[i]<=57))
       printf("%c",a[i]);
   }
   
  
}
