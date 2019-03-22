#include<stdio.h>

int main() {
   int a,b,c,i;
   char d[100];
   gets(d);
   for(i=0;d[i]!='\0';i++)
   {
       if(d[i]==' ')
       {
           if((d[i+1]>=97)&&(d[i+1]<=122))
              d[i+1]=d[i+1]-32;
       }
       if(i==0)
       {
        if((d[i]>=97)&&(d[i]<=122))
       d[i]=d[i]-32;
       }
   }
   for(i=0;d[i]!='\0';i++)
   printf("%c",d[i]);
}
