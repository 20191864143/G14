// 73.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int prime(int a);
	int a,m;
	printf("Please input a numbers:");
	scanf("%d",&a);
	m=prime(a);
	if(m==0)
	{
		printf("%d不是素数",a);

	}
	else
	{
		printf("%d是素数",a);
	}
	return 0;
}
int prime(int a)
{
	int i;
	for(i=2;i<a;i++)
	{
		if(a%i==0)
			return 0;
		else
			return 2;
	}
}


