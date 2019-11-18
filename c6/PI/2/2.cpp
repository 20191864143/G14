// 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	double PI,sum=0.0,SUM,n=1.0,m,i=2.0;
	do
	{
		m=(i-1)/(2*i-1);
		n=n*m;
		sum+=n;
		i++;
			                                                                                                  
	}	while(n>=1e-6);
	SUM=sum+1;
	PI=2*SUM;
	printf("%lf",PI);
	return 0;
}

