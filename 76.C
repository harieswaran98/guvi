int main()
{
	int a,b,c=0;
	scanf("%d",&a);
	for(b=2;b<a;b++)
	{
		if(a%b==0)
		c=1;
		}
		if(c==1)
		printf("yes");
		else
		printf("no");
		}
