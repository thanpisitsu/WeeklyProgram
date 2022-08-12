#include<stdio.h>
int main()
{
	int a,b,c,scr;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scr=a+b+c;
	scr=scr/5;
	switch (scr)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			printf("F");
			break;
		case 10:
			printf("D");
			break;
		case 11:
			printf("D+");
			break;
		case 12:
			printf("C");
			break;
		case 13:
			printf("C+");
			break;
		case 14:
			printf("B");
			break;
		case 15:
			printf("B+");
			break;
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
			printf("A");
			break;
	}
}
