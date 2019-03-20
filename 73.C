int main()
{
	int a,b,c,d,e=0;
	scanf("%d\n",&a);
	scanf("%d %d",&b,&c);
	for(d=b;d<c;d++)
	{
		//printf("%d %d",d,e);
		if(a==d)
		{
		e=1;
		break;
			}
		}
		if(e==1)
		printf("yes");
		else
		printf("no");
		}
