// 62.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i,j,t,a[11];
	for(i=1;i<=10;i++)
	{
		printf("请输入一个数\n");
		scanf("%d",&a[i]);
	}
	for(i=1;i<=10;i++)
	{
		for(j=i+1;j<=10;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=1;i<=10;i++)
	{
	
	printf("10个整数排序为:%d   ",a[i]);
	}
	return 0;
}

