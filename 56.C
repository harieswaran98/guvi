#include<stdio.h>

int main() {
   int a,b,d=0,e=0;
   char c[100];
   scanf("%[^\n]s",&c);
   for(b=0;c[b]!='\0';b++)
   {
       if(((c[b]>=65)&&(c[b]<=90))||((c[b]>=97)&&(c[b]<=122)))
       d++;
       if((c[b]>=48)&&(c[b]<=57))
       e++;
   }
   if((d>0)&&(e>0))
   printf("yes");
   else
   printf("no");
}
