// 66.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a[11][11],i,j;
	for(j=1;j<=10;j++)
	{
		a[j][1]=1;
	}
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			if(j>i)
			{
				a[i][j]=0;
				break;
			}
			else  if(i==j)
			{
				a[i][j]=1;
			}
			else	if(j>1)
			{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
			if(a[i][j]!=0)
			printf("%-4d",a[i][j]);

		}
		printf("\n");
	}
	return 0;
}

