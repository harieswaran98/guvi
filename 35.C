int main()
{ 
	char a[100];
	int i,n=0,k;
	scanf("%[^\n]s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]>=48)&&(a[i]<58))
		n++;
		}
		printf("%d",n);
		}
