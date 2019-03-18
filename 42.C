int main()
{
	int i,c,d,j,e;
	char b[100],a[100];
	scanf("%s\t",&b);
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++);
	c=i;
	for(i=0;b[i]!='\0';i++);
	d=i;
	if(c==d)
	{
	for(i=0;i<c;i++)
	{
		
			if(a[i]==b[i])
			e++;
			
			}
			
			
	if(e==c)
			printf("%s",b);
	}
	else
	{
		if(c>d)
		printf("%s",a);
		else
		printf("%s",b);
	
		}
		}
