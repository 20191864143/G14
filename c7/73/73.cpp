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
		printf("%d��������",a);

	}
	else
	{
		printf("%d������",a);
	}
	return 0;
}
int prime(int b )
{
	int i;
	for(i=2;i<b;i++)
	{
		if(b%i==0)
			return 0;
	}
}


