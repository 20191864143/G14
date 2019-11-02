// 45.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"
int main(int argc, char* argv[])
{
	int a,b;
	printf("PLEASE input a number");
	scanf("%d",&a);
	if(a<1000)
	{
		b=sqrt(a);
		printf("%d",b);
		
	}
	else 
	{
		printf("Please re-enter");
		scanf("%d",&a);
		b=sqrt(a);
		
		printf("%d",b);
	 } 
	 return 0;
 }

