int main()
{
	int a,b=1,c,d,e[100],i;
	scanf("%d",&a);
	while(a)
	{
		c=a%10;
		a=a/10;
		b=b*c;
		}

         printf("%d",b);
	
	}
