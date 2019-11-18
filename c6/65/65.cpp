// 65.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a[5]={8,6,5,4,1},t1,t2,i;
	t1=a[0];
	t2=a[1];
	a[0]=a[4];
	a[1]=a[3];
	a[3]=t2;
	a[4]=t1;
	printf("µ¹ÐòÊä³öÎª£º"); 
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}

