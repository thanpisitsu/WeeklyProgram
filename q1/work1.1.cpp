#include<stdio.h>
int main()
{
	int a,b,c,scr;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scr=a+b+c;
	if(0<=scr && scr<= 49){
		printf("F");
	}
	else if(50<=scr && scr<= 54){
		printf("D");
	}
	else if(55<=scr && scr<= 59){
		printf("D+");
	}
	else if(60<=scr && scr<= 64){
		printf("C");
	}
	else if(65<=scr && scr<= 69){
		printf("C+");
	}
	else if(70<=scr && scr<= 74){
		printf("B");
	}
	else if(75<=scr && scr<= 79){
		printf("B+");
	}
	else if(80<=scr && scr<= 100){
		printf("A");
	}
}
