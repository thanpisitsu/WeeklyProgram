#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			if(j%2==1 && i%2==1) printf("*");
			if(j%2==1 && i%2==0) printf(" ");
			if(j%2==0 && i%2==1) printf(" ");
			if(j%2==0 && i%2==0) printf("*");
		}
		printf("\n");
	}
}
