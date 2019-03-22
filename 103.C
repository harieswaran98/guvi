#include<stdio.h>

int main() {
   int a,b,c,i;
   char d[100];
   scanf("%[^\n]s",&d);
   for(i=0;d[i]!='\0';i++)
   {
       if((i=0)||(d[i]==' '))
       d[i]=d[i]+32;
   }
   for(i=0;d[i]!='\0';i++)
   printf("%c",d[i]);
}
