int main()
{
	int a,b,c=0,d,i,j;
	scanf("%d",&a);
	b=a;
	while(b)
	{
		i=b%10;
		c=c*10+i;
		b=b/10;
		}
		if(a==c)
		printf("yes");
		else
		printf("no");
		}
