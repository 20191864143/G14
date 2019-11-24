// 610.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
float sum=0.0,t,a1,b1,a=1,b=2;
int time=1;
for(time=1;time<=20;time++)
{
t=b/a;
b1=b;
a1=a;
a=b1;
b=a1+b1;
sum=sum+t;
}
printf("%f\n%f",sum,t);
	return 0;
}

