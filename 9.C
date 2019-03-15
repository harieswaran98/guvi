#include<stdio.h>

int main()
{
	int a,i=0,b[100],c,sum=0,r;
	scanf("%d",&a);
	printf("%d",a);
	scanf("%d",&c);
	printf("%d",c);#include<stdio.h>

int main()
{
	int a,i=0,b[100],c,sum=0,r;
	scanf("%d",&a);
	//printf("%d",a);
	scanf("%d",&c);
	//printf("%d",c);
	
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);  // printf("%d",b[i]);
		}
		i=0;
		
		while(c)
		{
			r=b[i];
			i=i+1;
			sum=sum+r;
			c--;
			}
		printf("%d",sum);
		
		}

	
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);   printf("%d",b[i]);
		}
		i=0;
		
		while(c)
		{
			r=b[i];
			i=i+1;
			sum=sum+r;
			c--;
			}
		printf("%d",sum);
		
		}
