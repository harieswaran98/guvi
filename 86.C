#include<stdio.h>

int main() {
   int x,b=0,i;
   char a[50];
   scanf("%s",&a);
   for(i=0;a[i]!='\0';i++)
   {
       for(x=i+1;a[x]!='\0';x++)
       {
       if(a[i]==a[x])
       b++;
       }
   }
   if(b==0)
   printf("yes");
   else
   printf("no");
}
