// 53.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
		int n,m,temp1,temp2,n1,m1;
	printf("please input two number:\n");
	scanf("%d,%d",&n,&m);
	if(n>m)
	{
		temp1 = n;
		n = m;
		m = temp1;
	}
	n1=n;
	m1=m;
	while(m!=0)
	{
		temp2 = n%m;
		n = m;
		m = temp2;
	}
	printf("最大公约数为%d\n",n);
	printf("最小公倍数为%d\n",n1*m1/n);
	return 0;
}

