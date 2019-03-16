int main()
{
	int a,b,c=0,d,i,j;
	scanf("%d",&a);

	for(i=a-1;i>=2;i--)
	{ 
		//printf("%d\t",i);
		if(a%i==0)
		{
			c=1;//printf("r");
	}
	}
		if(c==0)
		printf("yes");
		else
		printf("no");
		}
