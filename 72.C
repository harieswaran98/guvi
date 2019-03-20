int main()
{
	int b=1,c=0,i,j;
	char a[100];
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++);
	b=i;
	for(i=0;i<b;i++)
	{
	if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')||(a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U'))
			c++;
		}
			if(c>0)
            printf("yes");
			else
			printf("no");  
	}
