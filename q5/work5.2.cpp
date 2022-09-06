#include<stdio.h>
int main()
{
	int n,i,a,b,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			for(a=1;a<i;a++) printf(" ");
			for(b=1;b<=(n-i)*2+1;b++) printf("*");
			printf("\n");
		}
	for(i=1;i<n;i++)
		{
			for(a=1;a<n-i;a++) printf(" ");
			for(b=1;b<=2*i+1;b++) printf("*");
			printf("\n");
		}
}
