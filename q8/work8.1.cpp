#include<stdio.h>

void sqrt(float n)
{
	float x;
	x=n;
	for(int i=1;i<=20;i++)
		x=(x+n/x)/2;
	printf("%.4f\n",x);
}
int main()
{
	int n;
	scanf("%d",&n);
	sqrt(n);
	return 0;
}
