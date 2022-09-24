#include<stdio.h>
int main()
{
	int n,m,i,j;
	scanf("%d",&n);
	if(n%2==0) m=n;
	else if(n%2==1) m=n+1;
	for( i=1;i<=n;i++)
	{
		for( j=1;j<=m-1;j++) 
		{
			if(j==m/2-i+1 or j==m/2+i-1 and i<=m/2)
			printf("*");
			else if((j==i-m/2+1 or j==m*3/2-i-1 and i>m/2) and n%2==1) 
			printf("*");
			else if((j==i-m/2 or j==m*3/2-i and i>m/2) and n%2==0) 
			printf("*",n);
			else printf("_");
		}
	printf("\n");
	}
}
