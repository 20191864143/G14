// 55555.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a,n,Sn=0,i,t=0;
	printf("请输入一个数n\n");
	scanf("%d",&n);
	printf("请输入一个数a\n");
	scanf("%d",&a);
	for(i=1;i<=n;i++)
	{
		t=t*10+a;
		
		Sn=Sn+t;
	}
			printf("%d",Sn);
	return 0;


}

