int main()
{
	char a[100];
	int b,c=0,d,i,j;
	scanf("%[^\n]s",&a);
	for(j=0;a[j]!='\0';j++)
	{
		if((33<=a[j])&&(a[j]<=47)||(58<=a[j])&&(a[j]<=64)||(91<=a[j])&&(a[j]<=96)||(123<=a[j])&&(a[j]<=126))
		{
			c++;
			}
			}
			printf("%d",c);
			}
