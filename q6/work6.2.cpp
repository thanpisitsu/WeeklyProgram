#include <stdio.h>
#include <string.h>
#include <iostream>

int main()
{
	int count[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	             //A.B.C.D.E.F.G.H.I.J.K.L.M.N.O.P.Q.R.S.T.U.V.W.X.Y.Z
	char text[500];
	gets(text);
	for(int j=0;j<=strlen(text);j++)
	{
		if(text[j]>='a'and text[j]<='z') text[j]=toupper(text[j]);
		for(int k=0;k<=25;k++)
		if (text[j]=='A'+k) count[k]++;
	}
	for(int i=0;i<=25;i++)
	{
		if(count[i]!=0)
		printf("%c %d\n",'A'+i,count[i]);
	}
}
