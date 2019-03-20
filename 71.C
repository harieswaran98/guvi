int main()
{
	int b=1,c=0,i,j;
	char a[100];
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++);
	b=i;
	for(i=0;i<b;i++)
	{
	j=(b-1)-i;
	if(a[i]==a[j])
		c++;
		}
			
			if(c==b)
            printf("yes");
			else
			printf("no");  
	}
