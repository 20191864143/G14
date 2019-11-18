// 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
int main(int argc, char* argv[])
{
	int total=0;
	double n=1.0,m=0.0,PI;
	do
	{
		m=sqrt(2+m);
		n=n*(2/m);
		total++;
	}	while(total<=100);
	PI=2*n;
	printf("%f",PI);
	return 0;
}

