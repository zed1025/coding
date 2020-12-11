#include<stdio.h>
int main()
{
	int t,i,j,count;
	char ch;
	scanf("%d",&t);
	ch=getchar();
	while(t--)
	{
		char a[110];
		char b[110];
		gets(a);
		gets(b);
		i=0,count=0;
		while(b[i]!='\0')
		{
			j=0;
			while(a[j]!='\0')
			{
				if(b[i]==a[j])
				{
					count=count+1;
					break;
				}
				j++;
			}
			i++;
		}
		printf("%d\n",count);
	}
	return 0;
}
