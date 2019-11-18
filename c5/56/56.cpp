// 56.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i=1,n,m,sum=1;
	for(n=1;n<=20;n++){
	while(i<=n)
	{
		sum*=i;
		i++;
	}
	m+=sum; 
					}
	printf("×ÜÊýÎª%d",m);
	return 0;
}

