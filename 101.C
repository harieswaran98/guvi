#include<stdio.h>

int main() {
   int a,b,c,i;
   char d[100];
   scanf("%s %d",&d,&a);
   for(i=0;d[i]!='\0';i++);
   for(b=i-1;b>=0;i--)
{
    if(a!=0)
    {
    printf("%c",d[b]);
    a--;
    }
    else
    break;
}   
   
}
