// 613.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string.h>
int main(int argc, char* argv[])
{
	int sum=0,i,t;
	char a[3],b[3];
	gets(a);
	printf("\n");
		gets(b);
		for(i=0;i<3;i++)
		{
		t=a[i]-b[i];
		sum+=t;
		}
	printf("%d",sum);
	return 0;


}

