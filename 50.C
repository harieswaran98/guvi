int main()
{
	int a,b,s=1,z=0;
	scanf("%d",&a);
	while(s<a)
	{
		s=s*2;
		if(s==a)
		{
			z=1;
			break;
		}
			
	}
	if(z==1)
	printf("yes");
	else
	printf("no");
	}
