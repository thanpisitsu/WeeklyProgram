#include<stdio.h>
int main()
{
	int i,j,n,m;
	scanf("%d",&n);
	i=1;
	while(i<=n*n){
		m=i/n;
		if(n*m+m>=i){
			printf("*");
		}
		if(i%n==0&&i!=1){
			printf("\n");
		}
	i+=1;
	}
}
