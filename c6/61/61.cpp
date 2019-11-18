// 61.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i,j,k=0,a[100];
	for(i=0;i<100;i++)
	{
		a[i]=i+1;
	}
	a[0]=0;
	for(i=0;i<99;i++)
	{
		for(j=i+1;j<100;j++)
		{
			if(a[i]!=0&&a[j]!=0)
			{
				if(a[j]%a[i]==0)
				{
				
				a[j]=0;
				}
			}
		}
	}
	for(i=0;i<100;i++)
	{
		if(a[i]!=0)
		{
			printf("ËØÊýÎª%d   ",a[i]);
		}
	}
	printf("\n");
	return 0;
}

