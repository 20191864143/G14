// 44.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>=b&&a>=c)
	{
		printf("%d",a);
	}
	if(b>=a&&b>=c)
	{
		printf("%d",b);
	}
	if(c>=a&&c>=b)
	{
		printf("%d",c);
		
	}
	return 0;
 }

