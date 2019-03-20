int main()
{
	int a[10],b,c,i,j=0;
	for(i=0;i<10;i++)
	scanf("%d ",&a[i]);
	j=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]<j)
		{
		j=a[i];
			}
		}
		
		printf("%d",j);
		
		}
