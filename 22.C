#include<stdio.h>
int main()
{
	int a,b[100],c,d,i,j;
	scanf("%d",&a); //printf("%d",a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]); //printf("%d",b[i]);
	}
		c=0;
	for(j=0;j<a;j++)
		{
			if(c<b[j])
			{
			c=b[j];		
				}
			}
	printf("%d",c);
			}
