// 58.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i,n1,n2,n3;

	for(i=100;i<=999;i++){
		n1=i/100;
		n2=(i/10)%10;
		n3=i%10;

		if(i==n1*n1*n1+n2*n2*n2+n3*n3*n3)
			printf("%d\n",i);
	}

	return 0;
}

