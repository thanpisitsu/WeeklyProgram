#include <stdio.h>
#include <string.h>
#include <iostream>

int main()
{
	int count=1;
	char cha[500];
	gets(cha);
	for(int i=0;i<=strlen(cha)-1;i++)
	{
		if(cha[i]>='a'and cha[i]<='z') cha[i]=toupper(cha[i]);
		count=1;
		if(cha[i]!=' 'and cha[i]>='A'and cha[i]<='Z')
		{
			for(int j=0;j<=strlen(cha);j++)
			{
				if(cha[j]>='a'and cha[j]<='z') cha[j]=toupper(cha[j]);
				if(cha[i]==cha[j]&&i!=j)
				{
					cha[j]=' ';
					count+=1;
				}
			}
		printf("%c ",cha[i]);
		printf("%d\n",count);
		}
	}
}

