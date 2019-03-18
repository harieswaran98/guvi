int main()
{
	int a,b=0,c[100],i,j,d;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&c[i]);
		}
		d=c[0];
		for(i=0;i<a;i++)
		{
			if(b<c[i])
			b=c[i];
			if(d>c[i])
			d=c[i];
			}
printf("%d %d",b,d);
	 }
	 
