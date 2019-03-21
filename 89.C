int main()
{
	int a=0,i,j,k=0;
	char b[100];
	scanf("%s",&b);
	for(i=a;b[i]!='\0';i++)
	{
		for(j=i+1;b[j]!='\0';j++)
		{
			if(b[i]>b[j])
			{
			k=b[i];
			b[i]=b[j];
			b[j]=k;
				}
			}
			a++;
			}
