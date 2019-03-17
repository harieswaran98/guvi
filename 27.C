int main()
{
	char a[100];
	int i,j=0,l=0;
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{j++;
		if((a[i]>47)&&(a[i]<58))
		l++;
		}
		if(j==l)
		printf("yes");
		else
		printf("no");
		}
