#include<stdio.h>
int main()
{
	int n,k=-1,p;
	scanf("%d",&n);
	p=n;
	if(n%2==1) n=n+1;
	for(int i=1;i<=n/2;i++)
	{
		
		for(int j=1;j<=n/2-i;j++) printf("_");
		printf("*");
		for(int j=1;j<=k;j++) printf("_");
		if(i!=1)printf("*");
		for(int j=1;j<=n/2-i;j++) printf("_");
		k+=2;
		printf("\n");
	}
	if(p%2==1) {p=1; k=n-5;}
	else {p=0; k=n-3;}
	for(int i=n/2-p;i>=1;i--)
	{
		for(int j=1;j<=n/2-i;j++) printf("_");
		printf("*");
		for(int j=1;j<=k;j++) printf("_");
		if(i!=1)printf("*");
		for(int j=1;j<=n/2-i;j++) printf("_");
		k-=2;
		printf("\n");
	}
	
}
