#include<stdio.h>

int main() {
   int a,b,c[100],i;
   scanf("%d %d",&a,&b);
   for(i=0;i<a;i++)
   {
       scanf("%d",&c[i]);
   }
   for(i=0;i<a;i++)
   {
       if(c[i]%2!=0)
       b--;
       if(b==0)
       {
     printf("%d",c[i]);
     break;
       }
}

}
