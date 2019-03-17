int main()
{
	int a,b[100],c,d,i,j,h=0,t,k;
	scanf("%d",&a); //+printf("%d",a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]); //printf("%d\t",b[i]);
	}
	k=a/2;
	for(j=h;j<a;j++)
		{
			c=b[h];
			for(i=j+1;i<a;i++)
			{
				
			if(c>b[i])
			{
			c=b[i];	//printf("%d\n",c);
				d=i;	
				}
			}
			if(c<b[h])
			{
			t=b[d];
			b[d]=b[h];
			b[h]=t;
				}
			h++;
			}
			//printf("%d\t",k);
		//	printf("%d\n",b[k]);
			for(i=0;i<a;i++)
			{
				printf("%d",b[i]);
				}
			}
