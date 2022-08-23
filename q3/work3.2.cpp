#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for (i=1;i<=n*n;i++)
	{
		if(i%2==1)printf("*");else printf(" ");
		if(i%n==0)printf("\n");
	}
}
