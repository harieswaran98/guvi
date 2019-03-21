int main()
{
	char a[100],e[50],f[50];
	int b,c,d,j,k,i;
	scanf("%s",&a);
	k=0;
	j=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(i%2==0)
		{
		e[k]=a[i];
			k++;
			}
		else
			{
		f[j]=a[i];
				j++;
		}
		}:
		e[k]='\0';
		f[j]='\0';
		
	printf("%s ",e);
		printf("%s",f);
	}
	:
