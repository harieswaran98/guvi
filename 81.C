int main()
	{
		int a,b,c,i=-1,h;
		int d[100],t;
		do
		{i++;
		
		scanf("%d %d",&d[i],&d[i+1]); 
			
			//printf("%d,%d",i,i+1);
		
		b=2^32;
			}while((d[i]<b)&&(d[i+1]<b));
			c=i+1;
		for(i=0;i<=c;i=i+2)
		{
			//printf("%d ",i);
		
			//printf("%d ",d[i]);
			h=d[i+1]-d[i];
			//if(i=i*2)
		printf("%d\n",h);
		
			}
			}
