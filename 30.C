int main()
{
	int a=0,b,c,i,d,e;
	scanf("%d %d\n",&b,&c);
	scanf("%d %d\n",&d,&e);
if((b>=d)&&(c>=e))
	printf("%d %d",b-d,c-e);
	
else if((d>=b)&&(e>=c))
	printf("%d %d",d-b,e-c);
	
else if((b>=d)&&(e>=c))
	{
	b--;c=c+60;
	printf("%d %d",b-d,c-e);
		}
	else if((d>=b)&&(c>=e))
		{
			d--; e=e+60;
	printf("%d %d",d-b,e-c);
			}
