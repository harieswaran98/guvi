int main()
{
	int a,b,c,i=0,j=0;
	char g[100];
	scanf("%s",&g);
	//printf("%s\n",g);
	for(i=0;g[i]!='\0';i++)
	{
		if((g[i]!='1')&&(g[i]!='0'))
		{
		j=1; //printf("%c\n",g[i]);
			}
		}
		if(j==1)
		printf("no");
		else
		printf("yes");
		}
