// 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	double pi=0.0,j=1.0,t=1.0,i;

	for (i=1;(j/t)>=1e-8;i++)
	{
		j=i;
		pi=pi+j/t;
		t=t*(2*i+1);
	}
	pi=pi*2;
	printf("pi=%.8lf\n",pi);
	return 0;
}

