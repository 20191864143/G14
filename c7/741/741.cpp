// 741.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i,j;
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	void change(int a[3][3]);
	change(a);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}	
	return 0;
}
void change(int a[3][3])
{
	int i,j,t;
	for(i=0;i<3;i++)
	{
		for(j=0;j<i;j++)
		{
			t=a[i][j];
			a[j][i]=t;
		}
	}
}
