// narcissus.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
#include<time.h>
int main(int argc, char* argv[])
{
	int i,j,k,total=0,sum,temp,bits,t1,t2;
	int a[10][10],n[10];
	for(i=1;i<=9;i++)
	{
		a[i][0]=1;
		a[i][1]=i;
	}
	for(j=1;j<=9;j++)
	{
		a[0][j]=0;
		a[1][j]=1;
	}
	for(i=2;i<=9;i++)
	{
		for(j=2;j<=9;j++)
		{
			a[i][j]=1;

			for(k=1;k<=j;k++)
			{
				a[i][j]*=i;
			}
		}
	}
	t1=time(0);
	for(i=100;i<=999999999;i++)
	{
		if(i%10000==0)
		{
			printf("%u%% %d\r",(int)(i*100.0/999999999),time(0)-t1);
		}
		bits=(int)log10(i)+1;
		temp=i;
		sum=0;
		for(j=1;j<=bits;j++)
		{
			n[j]=temp%10;
			temp=temp/10;
			sum+=a[n[j]][bits];
		}
		if(sum==i)
		{
			printf("%d\r\n",i);
			total++;
		}
	}
	t2=time(0);
	printf("总共%d个水仙花,用时间%d秒",total,t2-t1);
	return 0;



}

