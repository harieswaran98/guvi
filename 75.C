int main()
{
	char a[100];
	int b,c,d;
	scanf("%s",&a);
for(c=0;a[c]!='\0';c++);
	
	for(d=0;d<c;d++)
	{
		if(c%2==0)
		{
	     b=c/2;
		if((d==b-1)||(d==b))
		printf("*");
		else
		printf("%c",a[d]);
			}
			else
			{
			
				if(d==c/2)
				printf("*");
				else
				printf("%c",a[d]);
				}
		
	}
	}
