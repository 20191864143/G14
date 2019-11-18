// 57.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a,b,suma=0,sumb=0;
	float c,sumc=0.0,SUM;
	for(a=1;a<=100;a++)
	{
		suma+=a;
	}
	for(b=1;b<=50;b++)
	{
		sumb+=b*b;
	}
	for(c=1;c<=10;c++)
	{
		sumc+=1/c;
	}
	SUM=suma+sumb+sumc;
	printf("×ÜÊýÎª%f\n",SUM);
	return 0;
}

