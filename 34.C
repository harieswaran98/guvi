int main()
{
	int b=0,c,i;
	char a[100];
	scanf("%[^\n]s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='.')
		{
		if(a[i+1]==' ')
			{
		b++;
				}
			}
		}
		printf("%d",b+1);
		}
