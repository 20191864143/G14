// 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
int main(int argc, char* argv[])
{
	double n,sum=0.0,PI,i=1.0;
	do
		{
			n=1/(i*i);
			sum+=n;
			i+=2;	
		}
		while(n>=1e-8);
	PI=sqrt(sum*8);
	printf("%lf",PI);
	return 0;
}

