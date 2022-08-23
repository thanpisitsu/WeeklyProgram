#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for (i=1;i<=n*n;i++)
	{
		if(i%2==1)printf("*");else printf(" ");
		if(n%2==0&&i%n==0){
			if((i/n)%2==1)printf("\n ");else printf("\n");
		}
		else if (i%n==0) printf("\n");
	}
}
