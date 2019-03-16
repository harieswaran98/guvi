int main()
{
	int a,b,c=0,d,i,j;
	
	scanf("%d%d",&a,&d);//printf("%d %d",a,d);
for(j=a+1;j<d;j++)
	{
		c=0;
//printf("\n%d\n",j);
	for(i=j-1;i>=2;i--)
	{ 
		//printf("%d\t",i);
		if(j%i==0)
		{
			c=1;//printf("r");
       	}
	}
		if(c==0)
		printf("%d\t",j);
	}
		}
