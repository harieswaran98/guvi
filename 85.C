#include<stdio.h>

int main() {
   int x,b;
   char a;
   scanf("%d%c%d",&x,&a,&b);
   if(a=='/')
   printf("%d",x/b);
   if(a=='%')
   printf("%d",x%b);
}
