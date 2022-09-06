#include<stdio.h>
int main()
{
	int n,i,j,c;
	scanf("%d",&n);
	i=1;
	while(i<=2*n-1)
	{
		j=1;
		while(j<=2*n-1)
		{
			if(i==1 || i==2*n-1) printf("*");
			else if(i<=n && (j>=i && j<=2*n-i))	printf("*");
			else if(i>n && (j>=n*2-i && j<=i)) printf("*");
			else printf(" ");
			j+=1;
		}
		printf("\n");
		i=i+1;
	}
}
