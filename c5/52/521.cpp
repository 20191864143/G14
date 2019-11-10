// 521.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"
int main(int argc, char* argv[])
{
	int sign=1,time=0;
	double pi=0.0,n=1.0,term=1.0;

	while(fabs(term)>=1e-8)
	{
		pi=pi+term;
		n = n+2;
		sign = -sign;
		term = sign/n;
		time++;
	}
	pi = pi*4;
	printf("pi=%10.8f\n",pi);
	printf("循环的次数:%d\n",time);
	return 0;
}
