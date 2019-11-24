// 611.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int time=1;
	float a=100,b=0,m;
	for(time=1;time<=10;time++)
	{
		a=a/2;
		b=b+a*2;
	}
	m=b+100;
	printf("%f\n%f",a,m);
	return 0;
}

