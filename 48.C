int main()
{
	int a,b[100],i,s=0;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
		s=s+b[i];
		}
	printf("%d",s/a);
		}
