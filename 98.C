int main()
{
    
	int a,d[100],n,s=0,i,b;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&d[i]);
	}
	for(i=0;i<a;i++)
	{
		if(d[i+1]<d[i])
		{
		printf("%d",i);
		break;
			}
		}
	
		
}
