#include<stdio.h>

int main() {
   int a,b,c[100],i,g=0,j;
   scanf("%d %d",&a,&b);
   for(i=0;i<a;i++)
   {
       scanf("%d",&c[i]);
   }
  for(i=0;i<a;i++)
  {
      for(j=i+i;j<a;j++)
      {
          if(c[i]>c[j])
          {
              g=c[i];
              c[i]=c[j];
              c[j]=g;
          }
      }
  }
     printf("%d",c[b-1]);

}
