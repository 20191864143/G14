// 10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	float i,j,t;
	scanf("%f",&i);
	if(i<=100000)
	{
	j=i*0.1;
	printf("%f\n",j);
	}
	if(i>100000&&i<=200000)
	{
	j=10000+(i-100000)*0.075;
	printf("%f\n",j);
	}
	if(i>200000&&i<=400000)
	{
	j=17500+(i-200000)*0.05;
	printf("%f\n",j);
	}
	if(i>400000&&i<=600000)
	{
	j=27500+(i-400000)*0.03;
	printf("%f\n",j);
	}
	if(i>600000&&i<=1000000)
	{
	j=33500+(i-600000)*0.015;
	printf("%f\n",j);
	}
	if(i>1000000)
	{
	j=39500+(i-1000000)*0.01;
	printf("%f\n",j);
	}

	return 0;
}

