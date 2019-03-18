int main()
{
	int i,c,d,j,e=0;
	char b[100],a[100];
	scanf("%s\t",&b);
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++);
	c=i;
	for(i=0;b[i]!='\0';i++);
	d=i;
	for(i=c;i<(c+d);i++)
	{
		b[i]=a[e];
		e++;
		}
		b[i]='\0';
		printf("%s",b);
	
		}
		
