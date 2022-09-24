#include<stdio.h>

void sqrt(int n)
{
	float x=0;
	int xx,i=1;
	for(i=0;i<=n;i++){
		if(i*i>n) 
		{
		xx=i-1;
		printf("%d.",i-1);
		x=xx-1;
		break;
		}
	}
	for(int i=0;i<=4;i++){
		for(int j=0;j<=9;j++)
		{
			int tenint=1;
			float point=0,tenfloat=0;
			
			for(int k=0;k<i;k++){
				tenint=tenint*10;
			}
			tenfloat=tenint;
			point=1/tenfloat;
			x=x+point;
			
			if(x*x>=n)
			{
				x=x-point;
				if(i>0)printf("%d",j);
				break;
			}
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	sqrt(n);
	return 0;
}
