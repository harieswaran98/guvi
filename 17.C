int main()
{
	int a,b,c,d=0,i=0,j=1,k,r;
	scanf("%d",&a);
	b=a;c=a;
	while(b)
	{
		b=b/10;
		d++;
		}
		//printf("%d\t",d);
		while(c)
		{
			j=1;
			k=d;
			r=c%10;
			while(k)
			{
				j=j*r;
				k--;
				}
			i=i+j; // printf("%d\t",j);
			c=c/10;
				}
				
				if(i==a)
				printf("yes");
				else
				printf("no");
				}
				
