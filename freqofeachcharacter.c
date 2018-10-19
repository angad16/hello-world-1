#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],b[40];
	int i,j,count=0,k;
	gets(str);
	b[0]=str[0];
	k=1;
	for(i=1;str[i]!='\0';i++)
	{
		
		for(j=0;j<=(i-1);j++)
		{
			if(str[i]!=str[j])
			{
				count++;
			}
		}
		if(count==i)
		{
			b[k]=str[i];
			k++;
		}
	}
	b[k]='\0';
	puts(b);
	for(i=0;b[i]!='\0';i++)
	{
		count=0;
		for(j=0;str[j]!='\0';j++)
		{
			if(b[i]==str[j])
			count++;
		}
		printf("freq of %c in string is %d\n",b[i],count);
	}
	
}
